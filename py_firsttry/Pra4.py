n=input('please enter a number')
sum=0
for x in range(n):
	sum = sum + x
print 'The sum is',sum
n=sum
sum=0
summ = 0
while n > 0:
	sum=sum+n
	n=n-2
print sum
if sum>1000:
	print 'so big!'
else:
	print 'hahah'