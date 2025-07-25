// Author: Divyansh Rawat | CP Ultimate Template
#include <bits/stdc++.h>
using namespace std;

// Optional PBDS (GNU Policy-Based DS - Ordered Set)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Fast I/O
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

// Aliases
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ff first
#define ss second
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

// Typedefs
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

// Constants
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const int INF = 1e18;
const double PI = acos(-1);

// Debug (toggle with DEBUG)
#ifdef DEBUG
#define dbg(x) cerr << #x << " = "; _print(x); cerr << endl
#else
#define dbg(x)
#endif

void _print(int x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(bool x) { cerr << x; }
template<class T> void _print(vector<T>& v) { cerr << "[ "; for (T i : v) _print(i), cerr << " "; cerr << "]"; }

// Random Generator
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rand_int(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

// Bit Operations
int setbit(int x, int pos) { return x | (1LL << pos); }
int clearbit(int x, int pos) { return x & ~(1LL << pos); }
bool checkbit(int x, int pos) { return (x >> pos) & 1; }

// GCD, LCM
int gcd(int a, int b) { return __gcd(a, b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

// Binary Exponentiation
int power(int a, int b, int m = MOD) {
    int res = 1; a %= m;
    while (b) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
int mod_inv(int a, int m = MOD) { return power(a, m - 2, m); }

// Sieve
const int N = 1e6 + 5;
bool is_prime[N];
void sieve() {
    fill(is_prime, is_prime + N, 1);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i < N; i++) if (is_prime[i]) for (int j = i * i; j < N; j += i) is_prime[j] = 0;
}

// DSU
struct DSU {
    vi parent, size;
    DSU(int n) { parent.resize(n); size.assign(n, 1); iota(all(parent), 0); }
    int find(int x) { return (parent[x] == x) ? x : parent[x] = find(parent[x]); }
    bool unite(int x, int y) {
        x = find(x), y = find(y);
        if (x == y) return false;
        if (size[x] < size[y]) swap(x, y);
        parent[y] = x; size[x] += size[y];
        return true;
    }
};

// Segment Tree (Sum)
struct SegmentTree {
    int n; vi t;
    SegmentTree(int _n) { n = _n; t.assign(4 * n, 0); }
    void build(vi &a, int v, int tl, int tr) {
        if (tl == tr) t[v] = a[tl];
        else {
            int tm = (tl + tr) / 2;
            build(a, v*2, tl, tm); build(a, v*2+1, tm+1, tr);
            t[v] = t[v*2] + t[v*2+1];
        }
    }
    void update(int v, int tl, int tr, int pos, int val) {
        if (tl == tr) t[v] = val;
        else {
            int tm = (tl + tr)/2;
            if (pos <= tm) update(v*2, tl, tm, pos, val);
            else update(v*2+1, tm+1, tr, pos, val);
            t[v] = t[v*2] + t[v*2+1];
        }
    }
    int query(int v, int tl, int tr, int l, int r) {
        if (l > r) return 0;
        if (l == tl && r == tr) return t[v];
        int tm = (tl + tr) / 2;
        return query(v*2, tl, tm, l, min(r, tm)) +
               query(v*2+1, tm+1, tr, max(l, tm+1), r);
    }
};

// Fenwick Tree
struct Fenwick {
    vi bit; int n;
    Fenwick(int _n) { n = _n; bit.assign(n + 1, 0); }
    void update(int i, int val) { while (i <= n) bit[i] += val, i += i & -i; }
    int query(int i) { int sum = 0; while (i > 0) sum += bit[i], i -= i & -i; return sum; }
    int query(int l, int r) { return query(r) - query(l - 1); }
};

// Dijkstra
vector<int> dijkstra(int src, vector<vector<pii>> &adj, int n) {
    vi dist(n, INF); dist[src] = 0;
    priority_queue<pii, vector<pii>, greater<>> pq; pq.push({0, src});
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d > dist[u]) continue;
        for (auto &[v, w] : adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

// Main
void solve() {
    // your code here
}

int32_t main() {
    fast;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
