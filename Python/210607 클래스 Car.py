class Car:
    
    def __init__(self, type, speed):
        self.type = type
        self.speed = speed


    def move(self):
        print(self.type + "가 " + str(self.speed) + " 속도를 움직입니다.")

    def speed_up(self, amount):
        self.speed +=amount

    def speed_down(self, amount):
        self.speed =+amount
