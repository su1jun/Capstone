from fastapi import FastAPI, WebSocket
from fastapi.responses import HTMLResponse
import rclpy
from rclpy.node import Node
from nav_msgs.msg import OccupancyGrid, Path
from geometry_msgs.msg import PoseStamped
import socketio

app = FastAPI()
sio = socketio.AsyncServer(async_mode='asgi')
app.mount('/', socketio.ASGIApp(sio))

# Initialize ROS 2
rclpy.init()
node = rclpy.create_node('web_map_viewer')

# Subscribe to the necessary topics
def map_callback(msg):
    sio.emit('update_map', {'data': msg.data})

def pose_callback(msg):
    sio.emit('update_pose', {'x': msg.pose.position.x, 'y': msg.pose.position.y})

def path_callback(msg):
    # Assuming the path is a list of poses
    path = [{'x': pose.pose.position.x, 'y': pose.pose.position.y} for pose in msg.poses]
    sio.emit('update_path', {'path': path})

node.create_subscription(OccupancyGrid, '/map', map_callback, 10)
node.create_subscription(PoseStamped, '/robot_pose', pose_callback, 10)
node.create_subscription(Path, '/plan', path_callback, 10)

@app.get("/")
async def index():
    return HTMLResponse(content="""
    <html>
    <body>
        <h1>Robot Map Viewer</h1>
        <canvas id="mapCanvas" width="800" height="600"></canvas>
        <script src="https://cdn.socket.io/4.0.1/socket.io.min.js"></script>
        <script>
            var socket = io();
            socket.on('update_map', function(data) {
                console.log('Map data:', data);
                // Add code to render the map
            });
            socket.on('update_pose', function(data) {
                console.log('Pose data:', data);
                // Add code to render the robot's position
            });
            socket.on('update_path', function(data) {
                console.log('Path data:', data);
                // Add code to render the path
            });
        </script>
    </body>
    </html>
    """, media_type="text/html")

def ros_spin():
    rclpy.spin(node)

if __name__ == "__main__":
    import uvicorn
    uvicorn.run(app, host="0.0.0.0", port=8000)
