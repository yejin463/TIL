Python 3.9.5 (tags/v3.9.5:0a7dcbd, May  3 2021, 17:27:52) [MSC v.1928 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def fct_fac(n):
    return lambda x: x ** n

>>> f2 = fct_fac(2)
>>> f3 = fct_fac(3)
>>> f2(4)
16
>>> f2(4)
16
>>> f3(4)
64
>>> 