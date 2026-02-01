// =====================================================
// Competitive Programming Template
// Author: Divyansh Rawat
// =====================================================

#include <bits/stdc++.h>
using namespace std;

// -------------------- Type Aliases --------------------
using ll = long long;
using ld = long double;
using int128 = __int128_t;

// -------------------- Macros --------------------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define nl '\n'

// =====================================================
// -------------------- UTILITIES ----------------------
// =====================================================

// -------- Prime Check (6k ± 1 optimization) ----------
bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (ll i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

// -------------------- Sieve --------------------------
vector<bool> sieve(int N) {
    vector<bool> prime(N + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= N; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= N; j += i)
                prime[j] = false;
        }
    }
    return prime;
}

// ---------------- Perfect Square ---------------------
bool isPerfectSquare(ll x) {
    if (x < 0) return false;
    ll r = sqrt(x);
    return r * r == x || (r + 1) * (r + 1) == x;
}

// ------------------- GCD Trick -----------------------
/*
GCD(a1, a2, ..., an)
= GCD(a1, a1+a2, a1+a2+a3, ...)
*/

// ------------------- Distance ------------------------
ld distance2D(ld x1, ld y1, ld x2, ld y2) {
    return hypot(x2 - x1, y2 - y1);
}

// =====================================================
// -------------------- STRINGS ------------------------
// =====================================================

// -------- Isomorphic Array-String Check --------------
bool isIsomorphic(const vector<int>& a, const string& s) {
    unordered_map<int, char> mp1;
    unordered_map<char, int> mp2;

    for (int i = 0; i < (int)a.size(); i++) {
        if (mp1.count(a[i]) && mp1[a[i]] != s[i]) return false;
        if (mp2.count(s[i]) && mp2[s[i]] != a[i]) return false;
        mp1[a[i]] = s[i];
        mp2[s[i]] = a[i];
    }
    return true;
}

// ---------------- Remove k chars ---------------------
string removeK(const string& s, int i, int k) {
    if (i + k > s.size()) return s;
    return s.substr(0, i) + s.substr(i + k);
}

// =====================================================
// -------------------- BIT TRICKS ---------------------
// =====================================================

// -------- MSB index (x > 0 only!) --------------------
int msbIndex(int x) {
    return 31 - __builtin_clz(x);
}

// -------- MSB index for long long -------------------
int msbIndexLL(ll x) {
    return 63 - __builtin_clzll(x);
}

// -------- Bitwise AND Range --------------------------
int rangeBitwiseAnd(int l, int r) {
    while (r > l)
        r &= (r - 1);
    return r;
}

// =====================================================
// -------------------- MATH ---------------------------
// =====================================================

// Sum from L to R
ll rangeSum(ll L, ll R) {
    return (R * (R + 1)) / 2 - (L * (L - 1)) / 2;
}

// Count pairs (c choose 2)
ll choose2(ll c) {
    return c * (c - 1) / 2;
}

// =====================================================
// -------------------- SOLVER -------------------------
// =====================================================

void solve() {
    return;
}
void MASTER(){
       
}  

// =====================================================
// -------------------- MAIN ---------------------------
// =====================================================

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
        MASTER();
    }
    return 0;
}
