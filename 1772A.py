import sys

# Read all input at once and split into lines
data = sys.stdin.read().split()

# Read the number of test cases
t = int(data[0])

# Process each test case efficiently
for i in range(1, t + 1):
    a, b = map(int, data[i].split('+'))  # Split and convert
    print(a + b)
