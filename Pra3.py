t=('a','b',['A','B'])
t[2][0]='x'
t[2][1]='y'
print t
t[2].pop()
print t
t[2].append('z')
print t
t[2].insert(1,'q')
print t
print 'learning \n list & tuple!'