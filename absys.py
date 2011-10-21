n = input()
for t in xrange(n):
    raw_input()
    eq = raw_input()
    a = eq.split(" + ")[0]
    b, c = eq.split(" + ")[1].split(" = ")
    try:
        a = int(a)
    except:
        b = int(b)
        c = int(c)
        print c-b, " + ", b, " = ", c
        continue
    try:
        b = int(b)
    except:
        c = int(c)
        print a, " + ", c-a, " = ", c
        continue
    print a, " + ", b, " = ", a+b
