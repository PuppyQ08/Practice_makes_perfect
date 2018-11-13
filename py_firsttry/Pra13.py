#sorted
def rever(x, y):
	if x > y:
		return -1
	if x < y:
		return 1
	return 0
print sorted([12,12,3,1,33,42],rever)
#closure
def lazy(*arg):
	def sum():
		ax = 0
		for n in arg:
			ax = ax + n
		return ax
	return sum
f = lazy(1,12,43,45,3,2)
print f()
# finally Lambda!!
map(Lambda x : x * x, [1,2,3,4,5,6,7,8])
	