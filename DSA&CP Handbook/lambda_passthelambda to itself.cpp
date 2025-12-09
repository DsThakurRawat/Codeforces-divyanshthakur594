#include <bits/stdc++.h>
using namespace std;
//Method 1 — Pass the lambda to itself (standard technique)
auto check = [&](auto self, long long n, long long m) -> bool {
    if (n == m) return true;
    if (n % 3 != 0) return false;
    return self(self, n / 3, m) || self(self, 2 * n / 3, m);
};

