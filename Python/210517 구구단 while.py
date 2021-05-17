def 구구단(min, max) :
    while (min<max+1):
            n = 1
            while (n<10):
                    print("{} * {} = {}".format(min, n, min*n))
                    n += 1
            min+=1
            print("--------------")
