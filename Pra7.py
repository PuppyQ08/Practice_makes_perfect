#defualf argument 
def add_end(L = None):
    if L is None:
    	L = []
    L.append('END')
    return L
print add_end()
#variable argument
def calc(*num):
	sum = 0
	for n in num:
		sum = sum + n * n
	return sum 
a = [1,1,2,3,4]
print calc(*a)
#keyword argument
kkw = {'aa':'bb','cc':'dd'}
def person(name, age, **kw):
	print 'name:', name, 'age:',age,  'other:', kw
person('jack',44, **kkw)
