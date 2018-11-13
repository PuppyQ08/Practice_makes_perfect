#turn first letter into capital letter.
s = raw_input('str:') 
def fun1(x):
	l = list(x)
	l[0]=l[0].upper()
	for i in l:
		if l.index(i) > 0:
			l[l.index(i)] = i.lower()			
	l = ''.join(l) # combine all str 
	return l
print fun1(s)
n = 3
a = []
for i in range(n): # int can't used in literation
	a.append(raw_input('str:'))
print map(fun1,a) #1 func can work on several str at the same time
# debug so many times ! finaly! 
