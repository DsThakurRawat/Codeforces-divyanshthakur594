import sys
input = sys.stdin.readline


for _ in range(int(input())):
        #give an integer n process all integers from 0 to n 
        # check for each i if i % 3 ==  i % 5 print(fizzBuzz)
        n = int(input())
        
        block = n // 15 
        rem = n % 15

        extra = sum(1 for i in range(rem + 1) if i % 3 == i % 5)

        count = block*3 + extra
        print(count)