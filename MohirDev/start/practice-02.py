def findMax(a, b, c):
    if a<b:
        if b>c:
            return b
        else:
            return c
    else:
        if a>c:
            return a
        else:
            return c
    


a = 1
b = 2
c = 3
print(findMax(a,b,c))