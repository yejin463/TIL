import random
computer=random.randint(1,3)
player = int(input("가위, 바위, 보 중에 하나를 선택하세요.(가위=1, 바위=2, 보=3) : "))
if computer==player:
    print("비겼습니다.")

elif player==1:
    if computer==2:
        print("졌습니다. (가위<바위)")
    else:
        print("이겼습니다. (가위>보)")

elif player==2:
    if computer==3:
        print("졌습니다. (바위<보)")
    else:
        print("이겼습니다. (바위>가위)")

elif player==3:
    if computer==1:
        print("졌습니다. (바위<보)")
    else:
        print("이겼습니다. (보>가위)")
else:
    print("잘못된 입력입니다.")
