
import turtle
import tkinter as tk
import random

# A* 알고리즘의 필요한 데이터 구조
class Node:
    def __init__(self, parent=None, position=None):
        self.parent = parent
        self.position = position

        self.g = 0
        self.h = 0
        self.f = 0

    def __eq__(self, other):
        return self.position == other.position

# A* 알고리즘 구현
def astar(maze, start, end):
    start_node = Node(None, start)
    start_node.g = start_node.h = start_node.f = 0
    end_node = Node(None, end)
    end_node.g = end_node.h = end_node.f = 0

    open_list = []
    closed_list = []

    open_list.append(start_node)

    while len(open_list) > 0:
        current_node = open_list[0]
        current_index = 0
        for index, item in enumerate(open_list):
            if item.f < current_node.f:
                current_node = item
                current_index = index

        open_list.pop(current_index)
        closed_list.append(current_node)

        if current_node == end_node:
            path = []
            current = current_node
            while current is not None:
                path.append(current.position)
                current = current.parent
            return path[::-1]

        children = []
        for new_position in [(0, -1), (0, 1), (-1, 0), (1, 0), (-1, -1), (-1, 1), (1, -1), (1, 1)]:
            node_position = (current_node.position[0] + new_position[0], current_node.position[1] + new_position[1])

            if node_position[0] > (len(maze) - 1) or node_position[0] < 0 or node_position[1] > (len(maze[len(maze)-1]) -1) or node_position[1] < 0:
                continue

            # 대각선 움직임에 대한 장애물 검사 추가
            if abs(new_position[0]) == 1 and abs(new_position[1]) == 1:
                if maze[current_node.position[0]][current_node.position[1] + new_position[1]] == 1 or maze[current_node.position[0] + new_position[0]][current_node.position[1]] == 1:
                    continue

            if maze[node_position[0]][node_position[1]] != 0:
                continue

            new_node = Node(current_node, node_position)
            children.append(new_node)

        for child in children:
            if len([closed_child for closed_child in closed_list if closed_child == child]) > 0:
                continue

            child.g = current_node.g + 1
            child.h = ((child.position[0] - end_node.position[0]) ** 2) + ((child.position[1] - end_node.position[1]) ** 2)
            child.f = child.g + child.h

            if len([open_node for open_node in open_list if child.position == open_node.position and child.g > open_node.g]) > 0:
                continue

            open_list.append(child)

# 격자와 경로를 그린다
def draw_grid_and_path(maze, path=None):
    window = turtle.Screen()
    window.bgcolor("white")
    window.title("A* Algorithm with Turtle")
    window.tracer(0)  # Turn off the screen updates

    drawer = turtle.Turtle()
    drawer.speed("fastest")  # Set the drawing speed to the fastest
    drawer.width(2)
    drawer.hideturtle()
    drawer.penup()

    grid_size = len(maze)
    cell_size = 20  # 각 셀의 크기

    # 장애물을 그립니다.
    drawer.color("black")
    for row in range(grid_size):
        for col in range(grid_size):
            if maze[row][col] == 1:
                drawer.goto(-grid_size * cell_size / 2 + col * cell_size, grid_size * cell_size / 2 - row * cell_size)
                drawer.begin_fill()
                for _ in range(4):
                    drawer.forward(cell_size)
                    drawer.right(90)
                drawer.end_fill()

    window.update()  # Update the screen once after drawing obstacles

    # 격자를 그린다
    for x in range(0, grid_size + 1):
        drawer.goto(-grid_size * cell_size / 2 + x * cell_size, grid_size * cell_size / 2)
        drawer.pendown()
        drawer.goto(-grid_size * cell_size / 2 + x * cell_size, -grid_size * cell_size / 2)
        drawer.penup()

    for y in range(0, grid_size + 1):
        drawer.goto(-grid_size * cell_size / 2, grid_size * cell_size / 2 - y * cell_size)
        drawer.pendown()
        drawer.goto(grid_size * cell_size / 2, grid_size * cell_size / 2 - y * cell_size)
        drawer.penup()

    window.update()  # Update the screen again after drawing grid

    # 경로를 그린다
    if path:
        drawer.color("red")
        drawer.width(4)
        for idx, position in enumerate(path):
            x = -grid_size * cell_size / 2 + position[0] * cell_size + cell_size / 2
            y = grid_size * cell_size / 2 - position[1] * cell_size - cell_size / 2
            if idx == 0:  # 첫 포인트일 경우
                drawer.penup()
                drawer.goto(x, y)
            else:  # 첫 포인트가 아닐 경우
                drawer.pendown()
                drawer.goto(x, y)
        drawer.penup()
    else:
        print("No path found.")

    window.mainloop()

if __name__ == "__main__":
    maze = [[0 for _ in range(64)] for _ in range(64)]
    start = (0, 0)
    end = (63, 63)
    
    # 장애물을 랜덤하게 추가한다. 여기서는 격자의 약 20%에 장애물을 추가했습니다.
    obstacles = int(0.40 * 64 * 64)
    for _ in range(obstacles):
        x, y = random.randint(0, 63), random.randint(0, 63)
        maze[x][y] = 1

    path = astar(maze, start, end)
    draw_grid_and_path(maze, path)