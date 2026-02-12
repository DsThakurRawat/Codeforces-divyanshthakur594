# ============================================================
# Competitive Programming Utility Library (Python)
# by Divyansh Rawat (converted & extended)
# ============================================================

import sys
import math
from collections import defaultdict, Counter, deque
from bisect import bisect_left, bisect_right
from itertools import accumulate
input = sys.stdin.readline

# ------------------------------------------------------------
# FAST I/O
# ------------------------------------------------------------

def read_ints():
    return list(map(int, input().split()))

def read_str():
    return input().strip()

# ------------------------------------------------------------
# CONSTANTS
# ------------------------------------------------------------

INF = 10**18
MOD = 998244353


# ------------------------------------------------------------
# BIT TRICKS (C++ equivalents)
# ------------------------------------------------------------

def msb_index(x: int) -> int:
    """Index of most significant set bit (0-based)"""
    return x.bit_length() - 1   # equivalent to 31 - __builtin_clz(x)

def msb_value(x: int) -> int:
    """Value of MSB"""
    return 1 << msb_index(x)

def lsb_value(x: int) -> int:
    """Value of LSB"""
    return x & -x

def is_power_of_two(x: int) -> bool:
    return x > 0 and (x & (x - 1)) == 0

# ------------------------------------------------------------
# MATH UTILITIES
# ------------------------------------------------------------

def gcd(a: int, b: int) -> int:
    return math.gcd(a, b)

def lcm(a: int, b: int) -> int:
    return a // gcd(a, b) * b

def is_perfect_square(n: int) -> bool:
    if n < 0:
        return False
    x = int(math.isqrt(n))
    return x * x == n

def sum_n(n: int) -> int:
    return n * (n + 1) // 2

# ------------------------------------------------------------
# STRING UTILITIES
# ------------------------------------------------------------

def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def remove_k_at_i(s: str, i: int, k: int) -> str:
    if i + k <= len(s):
        return s[:i] + s[i+k:]
    return s

def string_of(k: int, c: str) -> str:
    return c * k   # equivalent to string(k, c) in C++

# ------------------------------------------------------------
# HASHMAP / FREQUENCY TRICKS
# ------------------------------------------------------------

def freq_map(arr):
    return Counter(arr)

def count_pairs_sum_k(arr, k):
    """
    O(n) time, O(n) space
    """
    mp = defaultdict(int)
    cnt = 0
    for x in arr:
        cnt += mp[k - x]
        mp[x] += 1
    return cnt

# ------------------------------------------------------------
# TWO POINTERS
# ------------------------------------------------------------

def count_pairs_sorted(arr, k):
    """
    Sort + two pointers
    O(n log n)
    """
    arr.sort()
    l, r = 0, len(arr) - 1
    cnt = 0

    while l < r:
        s = arr[l] + arr[r]
        if s == k:
            if arr[l] == arr[r]:
                c = r - l + 1
                cnt += c * (c - 1) // 2
                break
            c1 = c2 = 1
            while l + 1 < r and arr[l] == arr[l + 1]:
                c1 += 1
                l += 1
            while r - 1 > l and arr[r] == arr[r - 1]:
                c2 += 1
                r -= 1
            cnt += c1 * c2
            l += 1
            r -= 1
        elif s < k:
            l += 1
        else:
            r -= 1
    return cnt

# ------------------------------------------------------------
# BINARY SEARCH / LOWER BOUND
# ------------------------------------------------------------

def lower_bound(arr, x):
    return bisect_left(arr, x)

def upper_bound(arr, x):
    return bisect_right(arr, x)

# ------------------------------------------------------------
# BITMASK / SLIDING WINDOW
# (Longest subarray with AND = 0)
# ------------------------------------------------------------

def longest_nice_subarray(nums):
    mask = 0
    l = 0
    ans = 0
    for r in range(len(nums)):
        while mask & nums[r]:
            mask ^= nums[l]
            l += 1
        mask |= nums[r]
        ans = max(ans, r - l + 1)
    return ans

# ------------------------------------------------------------
# COLUMN-WISE PAIRWISE ABSOLUTE DIFFERENCE
# ------------------------------------------------------------

def column_pairwise_abs_sum(grid, n, m):
    pass

# ------------------------------------------------------------
# CLOCK ANGLE PROBLEM (MASTER)
# ------------------------------------------------------------

def MASTER() -> None:
     n = int(input())
     ans = 0

     def sumdigit(n):
         s = str(n)
         sum = 0
         for j in s :
             sum +=ord(j)-ord('0')
         return sum
     for i in range(n,n+200):
         if i - sumdigit(i) ==n:
             ans +=1
     print(ans)
        
  


        
    


   

# ------------------------------------------------------------
# SOLVE (USER-DEFINED)
# ------------------------------------------------------------

def solve():
    pass

# ------------------------------------------------------------
# MAIN DRIVER
# ------------------------------------------------------------

def main():
    t = 1
    t = int(input())
    for _ in range(t):
        MASTER()
        # solve()

if __name__ == "__main__":
    main()
