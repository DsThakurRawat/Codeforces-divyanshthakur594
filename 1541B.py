
for i in range(int(input())):

    def count_pairs(a):
        n = len(a)
        pos = {a[i]: i + 1 for i in range(n)}  # value -> 1-based index
        ans = 0

        for i in range(1, n + 1):
            ai = a[i - 1]
            # only consider aj such that ai * aj <= 2n
            j_val = 1
            while ai * j_val <= 2 * n:
                prod = ai * j_val
                if prod - i in pos:
                    j_idx = pos[prod - i]
                    if j_idx > i and j_idx <= n and a[j_idx - 1] == j_val:
                        ans += 1
                j_val += 1

        return ans
