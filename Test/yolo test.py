import cv2
from ultralytics import YOLO

model = YOLO('yolov8n.pt')

cap = cv2.VideoCapture(0)

while cap.isOpened():
    success, frame = cap.read()
    
    if success:
        results= model(frame)
        
        annotated_frame = results[0].plot()
        
        cv2.imshow("YOLOv8 Inference", annotated_frame)
        
        if cv2.waitKey(1)&0xFF == ord("q"):
            break
    else:
        print("hhi")
        break
    
cap.release()
cv2.destroyAllWindows()