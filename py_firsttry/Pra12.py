#Use reduce to calculate n!
a = [1,2,3]
def fun1(x, y):
	return x * y
print reduce(fun1, a)
#Use filter to choose prime number
def fun2(n):
	if n == 1:
		return False
	else:
		for i in range(2,int(n** 0.5 + 2)):
			if n % i == 0:
				return False
			else:
				pass
		return True
s = [i for i in range (1,19)]
print filter(fun2, s)# True can stay, false leave