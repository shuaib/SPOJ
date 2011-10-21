n = input()
for t in xrange(n):
    x, y = raw_input().split()
    x = int(x[-1::-1])
    y = int(y[-1::-1])
    sum = x+y
    print int(str(sum)[-1::-1])
