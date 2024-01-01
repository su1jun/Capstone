import cv2
import mediapipe as mp
import tkinter as tk
from tkinter import ttk
from PIL import Image, ImageTk

# MediaPipe 포즈 초기화
mp_pose = mp.solutions.pose
pose = mp_pose.Pose()
state = True # 버튼 누르기 전
state2 = False # 감지 누르기 전
threshold = [0, 0] # 코~목, 코~손목

def run():
    if state2:
        frame4s[6].grid_forget()
        frame4s[7].grid_forget()
    else:
        global threshold
        threshold[0] = float(frame2s[1].get())
        threshold[1] = float(frame2s[3].get())
        frame4s[6].grid(row=1, column=1, padx=5, pady=5, columnspan=2)
        frame4s[7].grid(row=1, column=3, padx=5, pady=5, columnspan=2)

def toggle_update():
    global state
    if state:
        state = False
    else:
        state = True
        update_labels()

# Tkinter 윈도우 초기화
root = tk.Tk()
root.title("포즈 추정")

font_set = ("Noto Sans KR Light", 10)

# 첫 번째 프레임
frame1 = ttk.LabelFrame(root, padding="10", text="위치")
frame1.grid(row=0, column=0)

frame1s = [
    tk.Label(frame1, text="왼어깨: ", font=font_set, anchor='e'),
    tk.Entry(frame1, font=font_set, width=15),

    tk.Label(frame1, text="오른어깨:", font=font_set, anchor='e'),
    tk.Entry(frame1, font=font_set, width=15),

    tk.Label(frame1, text=" 코 : ", font=font_set, anchor='e'),
    tk.Entry(frame1, font=font_set, width=15),

    tk.Label(frame1, text="왼손목:", font=font_set, anchor='e'),
    tk.Entry(frame1, font=font_set, width=15),

    tk.Label(frame1, text="오른손목:", font=font_set, anchor='e'),
    tk.Entry(frame1, font=font_set, width=15),

    ttk.Button(frame1, text="갱신 on/off", command=toggle_update),
]

frame1s[0].grid(row=0, column=0, padx=20, pady=5)
frame1s[1].grid(row=0, column=1, padx=20, pady=5)

frame1s[2].grid(row=0, column=2, padx=20, pady=5)
frame1s[3].grid(row=0, column=3, padx=20, pady=5)

frame1s[4].grid(row=0, column=4, padx=20, pady=5)
frame1s[5].grid(row=0, column=5, padx=20, pady=5)

frame1s[6].grid(row=1, column=0, padx=20, pady=5)
frame1s[7].grid(row=1, column=1, padx=20, pady=5)

frame1s[8].grid(row=1, column=2, padx=20, pady=5)
frame1s[9].grid(row=1, column=3, padx=20, pady=5)

frame1s[10].grid(row=1, column=4, columnspan=2, padx=20, pady=5)

# 두 번째 프레임
frame2 = ttk.LabelFrame(root, padding="10", text="측정 거리")
frame2.grid(row=1, column=0)

# 스핀 박스로 값 바꿀때 쓸거
default_value = [
    tk.StringVar(value='700'),
    tk.StringVar(value='400')
]

frame2s = [
    tk.Label(frame2, text="코~목:", font=font_set, anchor='e'),
    tk.Spinbox(frame2, from_=0, to=5000, increment=10, textvariable=default_value[0], width=15),

    tk.Label(frame2, text="코~손목:", font=font_set, anchor='e'),
    tk.Spinbox(frame2, from_=0, to=5000, increment=10, textvariable=default_value[1], width=15)
]

# 요소를 한 줄에 배치
frame2s[0].grid(row=0, column=0, padx=25, pady=5)
frame2s[1].grid(row=0, column=1, padx=25, pady=5)

frame2s[2].grid(row=0, column=2, padx=25, pady=5)
frame2s[3].grid(row=0, column=3, padx=25, pady=5)

# 두 번째 행에 버튼 배치
button = ttk.Button(frame2, text="감지 시작", command=run)
button.grid(row=0, column=4, columnspan=2, pady=15)

# 세 번째 프레임: 이미지 로드 프레임
frame3 = ttk.LabelFrame(root, padding="10", text="Open-CV")
frame3.grid(row=2, column=0)

image_label = tk.Label(frame3)
image_label.grid(row=0, column=0)

# 네 번째 프레임: 경고 메시지 프레임
frame4 = ttk.LabelFrame(root, padding="10", text="현재 거리 (상대 보정)")
frame4.grid(row=3, column=0)

frame4s = [
    tk.Label(frame4, text="코~왼손목 :", font=font_set, anchor='e'),
    tk.Entry(frame4, font=font_set, width=15),

    tk.Label(frame4, text="코~목 :", font=font_set, anchor='e'),
    tk.Entry(frame4, font=font_set, width=15),

    tk.Label(frame4, text="코~오른손목:", font=font_set, anchor='e'),
    tk.Entry(frame4, font=font_set, width=15),

    tk.Label(frame4, text="상태 정보 : ", font=("Noto Sans KR Medium", 12, 'bold'), fg='red'),
    tk.Entry(frame4, font=("Noto Sans KR Medium", 12, 'bold'), fg='red')
]

# 요소를 한 줄에 배치
for i, element in enumerate(frame4s[:6]):
    element.grid(row=0, column=i, padx=5, pady=5)

# 카메라 초기화
cap = cv2.VideoCapture(1)

def update_value(nose, left_shoulder, right_shoulder, left_wrist, right_wrist):
    # 프레임 1 갱신
    frame1s[1].delete(0,"end")
    frame1s[1].insert('0', f"{left_shoulder.x:.4f}, {left_shoulder.y:.4f}")

    frame1s[3].delete(0,"end")
    frame1s[3].insert('0', f"{right_shoulder.x:.4f}, {right_shoulder.y:.4f}")

    frame1s[5].delete(0,"end")
    frame1s[5].insert('0', f"{nose.x:.4f}, {nose.y:.4f}")

    frame1s[7].delete(0,"end")
    frame1s[7].insert('0', f"{left_wrist.x:.4f}, {left_wrist.y:.4f}")

    frame1s[9].delete(0,"end")
    frame1s[9].insert('0', f"{right_wrist.x:.4f}, {right_wrist.y:.4f}")

    neck_x = (left_shoulder.x + right_shoulder.x) / 2
    neck_y = (left_shoulder.y + right_shoulder.y) / 2

    if not left_wrist.visibility:
        nose_to_lw_dis = 9999
    else:
        nose_to_lw_dis = 1 / ((nose.x - left_wrist.x) ** 2 + (nose.y - left_wrist.y) ** 2) ** 1/2 * 100

    if not right_wrist.visibility:
        nose_to_rw_dis = 9999
    else:
        nose_to_rw_dis = 1 / ((nose.x - right_wrist.x) ** 2 + (nose.y - right_wrist.y) ** 2) ** 1/2 * 100
    
    nose_to_neck_dis = 1 / ((nose.x - neck_x) ** 2 + (nose.y - neck_y) ** 2) ** 1/2 * 100

    # 프레임 4 갱신
    frame4s[1].delete(0,"end")
    frame4s[1].insert('0', f"{nose_to_lw_dis:.6f}")

    frame4s[3].delete(0,"end")
    frame4s[3].insert('0', f"{nose_to_neck_dis:.6f}")
    
    frame4s[5].delete(0,"end")
    frame4s[5].insert('0', f"{nose_to_rw_dis:.6f}")

    if threshold[0] < nose_to_neck_dis  or threshold[1] < max(nose_to_lw_dis, nose_to_rw_dis):
        frame4s[7].delete(0,"end")
        frame4s[7].insert('0', f" 경고! 자세가 틀어졌습니다 ")
    else:
        frame4s[7].delete(0,"end")

def update_labels():
    ret, frame = cap.read()
    
    if not ret:
        return
    
    # BGR을 RGB로 변환
    rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

    # 포즈 인식
    results = pose.process(rgb_frame)

    # 손목과 코 위치 업데이트
    if results.pose_landmarks:
        landmarks = results.pose_landmarks.landmark
        nose = landmarks[0]
        left_shoulder = landmarks[11]
        right_shoulder = landmarks[12]
        left_wrist = landmarks[15]
        right_wrist = landmarks[16]
        
        if state:
            update_value(nose, left_shoulder, right_shoulder, left_wrist, right_wrist)

        # 포즈 랜드마크 그리기
        mp.solutions.drawing_utils.draw_landmarks(frame, results.pose_landmarks, mp_pose.POSE_CONNECTIONS)
        
        # Tkinter에서 표시할 이미지 준비
        rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        img = Image.fromarray(rgb_frame)
        imgtk = ImageTk.PhotoImage(image=img)
        image_label.imgtk = imgtk
        image_label.configure(image=imgtk)

    # 100ms 후에 라벨 업데이트 함수 다시 호출
    root.after(100, update_labels)

# 라벨 업데이트 함수 호출 시작
update_labels()

# Tkinter 윈도우 실행
root.mainloop()

# 자원 해제
cap.release()
cv2.destroyAllWindows()

