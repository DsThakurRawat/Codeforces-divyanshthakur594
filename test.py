import  math 
for _ in range(int(input())):
    s = input()
    num = int(s)
    #now we need to check if numb can be writttens as num = (a+b)^2
    root = math.isqrt(num)
    if root * root == num:
        a = 0
        b = root
        print(a, b)
    else:
        print(-1)
        