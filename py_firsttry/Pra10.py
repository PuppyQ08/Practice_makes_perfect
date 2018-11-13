#list comprehension 
print [x * x + x for x in range(1,11) if x % 2 == 0]
# generator
def fib(max):
	n, a, b = 0, 0, 1
	while n < max:
		yield b
		a, b = b, a + b
		n = n + 1
for n in fib(6):
	print n
	