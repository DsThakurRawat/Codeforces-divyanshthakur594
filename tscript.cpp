// ================================================
//  Competitive Programming Template
//  Author: Divyansh Rawat
// ================================================

#include <bits/stdc++.h>
using namespace std;

// ============ Fast Types ============
using ll = long long;
using ld = long double;
using int128 = __int128_t;

// ============ Macros ============
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define nl '\n'

// ============ Math Utilities ============

// GCD
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

// LCM
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Check prime (6k ± 1)
bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

// Perfect square
bool isPerfectSquare(ll x) {
    if (x < 0) return false;
    ll r = sqrt(x);
    return r * r == x || (r + 1) * (r + 1) == x;
}

// Count power of 2 in number
ll countTwos(ll x) {
    ll c = 0;
    while (x % 2 == 0) {
        x /= 2;
        c++;
    }
    return c;
}

// Euclidean distance
double dist(double x1, double y1, double x2, double y2) {
    return hypot(x2 - x1, y2 - y1);
}

// ============ Sieve ============
vector<bool> sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++)
        if (prime[i])
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
    return prime;
}

// ============ String Utilities ============

// Isomorphic check (array ↔ string)
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

// ============ Bit Tricks ============

// Range AND (LC 201)
int rangeBitwiseAnd(int l, int r) {
    while (r > l)
        r &= (r - 1);
    return r;
}

// Longest subarray with AND = 0
int longestNiceSubarray(vector<int>& nums) {
    int mask = 0, l = 0, ans = 0;
    for (int r = 0; r < nums.size(); r++) {
        while (mask & nums[r]) {
            mask ^= nums[l];
            l++;
        }
        mask |= nums[r];
        ans = max(ans, r - l + 1);
    }
    return ans;
}

// ============ Pair Sum K ============
ll countPairs(vector<ll>& a, ll k) {
    unordered_map<ll, ll> freq;
    ll cnt = 0;
    for (ll x : a) {
        cnt += freq[k - x];
        freq[x]++;
    }
    return cnt;
}

// ============ Main Solve ============
void solve() {
    ll a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    
    // write problem logic here
}

// ============ Main ============
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}
