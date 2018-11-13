#tail-recursion
def fact(n):
    return fact_iter(n,1)
def fact_iter(n, total):
    if n == 1:
    	return  total
    return fact_iter(n-1, n * total)
print fact(8)
