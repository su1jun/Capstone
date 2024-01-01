START_SPEED = 55
HEIGHT, WIDHT = 480, 640 # camera setting
K1 = 0.7 # line tracing parameter

# THRESHOLD_FILTER = 160 # filter threshold for training data

DATA_FILE_PATH = "train_data/"
DEBUG_FILE_PATH = "debugging/"
MODEL_PATH = 'models/12_18_v1(339)(1).h5'

THESHOLD1 = 6 # straight
MINUS_STRAIGHT = 25 # acatually minus when turn

# Error detect
THESHOLD2 = 70

sh = True # for debug, sh = True