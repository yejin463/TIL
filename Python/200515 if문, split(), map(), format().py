print("대마고에 오신 것을 환영합니다.")
name, age = input("이름과 나이를 입력하세요 : ").split()
print("{}세 {}씨, 반갑습니다.".format(age, name))
ko, en, ma = map(int, input("국어, 영어, 수학 성적을 입력하세요 : ").split())
평균 = (ko+en+ma)/3
print("{}씨의 평균은 {}입니다.".format(name, 평균))
if 평균 < 80:
    print("불합격입니다.")
else:
    print("합격입니다.")
    if 평균>=90:
        print("우등상 수상 대상입니다.")
