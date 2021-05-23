import random

def dice(pip=6, re=1):
	for r in range(1, re+1):
		n=random.randint(1,pip)
		print(pip, "주사위 결과", r, " : ", n)
