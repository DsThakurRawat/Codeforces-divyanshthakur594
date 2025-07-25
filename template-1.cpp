#include <bits/stdc++.h>
using namespace std;

// Constants
#define INF 1e9
#define INF64 9223372036854775807LL
#define NINF64 -9223372036854775807LL
#define MOD 998244353
#define MOD2 1000000007
#define PI 3.141592653589793238462

// Type Definitions
#define int int64_t
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define vb vector<bool>
#define pii pair<int, int>
#define mii map<int, int>
#define un_s unordered_set<int>
#define un_mp unordered_map<int, int>
#define pr_q priority_queue<int>
#define min_pq priority_queue<int, vector<int>, greater<int>>
#define max_pq priority_queue<int>
#define set_bits __builtin_popcountll

// Common Functions / Macros
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define endl '\n'
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define debug(x) cerr << #x << " = " << x << endl

// Loops
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)
#define rep0(i, n) for (int i = 0; i < n; ++i)
#define each(x, a) for (auto &x : a)

// Fast I/O
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Custom sorting lambda
#define custom_sort_by_sec [](const pii &a, const pii &b){ return a.ss < b.ss; }
#define custom_sort_by_ff [](const pii &a, const pii &b){ return a.ff < b.ff; }

// Useful math utilities
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
bool isPowerOfTwo(int x) { return x && !(x & (x - 1)); }

// Direction vectors (for grids)
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
const int dx8[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy8[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

// Modular arithmetic
int mod_add(int a, int b, int m = MOD) { return (a % m + b % m) % m; }
int mod_sub(int a, int b, int m = MOD) { return (a % m - b % m + m) % m; }
int mod_mul(int a, int b, int m = MOD) { return ((a % m) * (b % m)) % m; }
int mod_pow(int a, int b, int m = MOD) {
    int res = 1; a %= m;
    while (b > 0) {
        if (b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m); b >>= 1;
    }
    return res;
}
int mod_inv(int a, int m = MOD) { return mod_pow(a, m - 2, m); } // Fermat's Little Theorem for MOD prime

// Main template
int32_t main() {
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--) {
        // Your code here
    }
    
    return 0;
}
