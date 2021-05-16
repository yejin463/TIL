def 구구단(n, m) :
	for i in range(n, m+1):
		for j in range (1, 10):
			print("{} * {} = {}".format(i, j, i*j))
		print("-----------------------")
