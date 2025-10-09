import math

# Number of test cases
tc = int(input())

for _ in range(tc):
    n = int(input())
    
    # Compute log base 3
    x = math.log(n) / math.log(3)
    
    # Take integer part
    x_int = int(x)
    
    # Make the equation
    res1 = 3 * n
    res3 = int((x_int * n) / 3)  # multiply as float, divide, then truncate
    
    complete = res1 + res3
    print(complete)
