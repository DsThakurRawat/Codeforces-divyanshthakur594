/**************************************************
* Author    : Divyansh Thakur Rawat
* Template  : Full Competitive Programming Template
**************************************************/

#include <bits/stdc++.h>
using namespace std;

// === ========== Fast I/O ========== ===
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// === ========== Typedefs & Macros ========== ===
#define int int64_t
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define vb vector<bool>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'

// === ========== Constants ========== ===
const int INF = 1e18;
const int NINF = -INF;
const int MOD = 998244353;
const int MOD2 = 1e9 + 7;
const double PI = acos(-1);

// === ========== Loops ========== ===
#define rep(i,a,b) for(int i = a; i < b; ++i)
#define per(i,a,b) for(int i = a; i >= b; --i)
#define each(x,a) for(auto &x : a)

// === ========== Debug ========== ===
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(bool x) { cerr << x; }
template<class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.ff); cerr << ", "; _print(p.ss); cerr << "}"; }
template<class T> void _print(vector<T> v) { cerr << "[ "; for(T i : v) {_print(i); cerr << " "; } cerr << "]"; }
template<class T> void _print(set<T> s) { cerr << "{ "; for(T i : s) {_print(i); cerr << " "; } cerr << "}"; }
template<class T, class V> void _print(map<T, V> m) { cerr << "{ "; for(auto i : m) {_print(i); cerr << " "; } cerr << "}"; }

// === ========== Modular Arithmetic ========== ===
int mod_add(int a, int b, int m = MOD) { return (a % m + b % m + m) % m; }
int mod_sub(int a, int b, int m = MOD) { return (a % m - b % m + m) % m; }
int mod_mul(int a, int b, int m = MOD) { return ((a % m) * (b % m)) % m; }
int mod_pow(int a, int b, int m = MOD) {
    int res = 1; a %= m;
    while (b > 0) {
        if (b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}
int mod_inv(int a, int m = MOD) {
    return mod_pow(a, m - 2, m); // Only if m is prime
}

// === ========== Grid Movement ========== ===
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
int dx8[] = {-1,-1,-1,0,1,1,1,0};
int dy8[] = {-1,0,1,1,1,0,-1,-1};

// === ========== DSU (Disjoint Set Union) ========== ===
struct DSU {
    vi parent, size;
    DSU(int n) {
        parent.resize(n);
        size.assign(n, 1);
        iota(all(parent), 0);
    }
    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }
    bool unite(int x, int y) {
        x = find(x), y = find(y);
        if (x == y) return false;
        if (size[x] < size[y]) swap(x, y);
        parent[y] = x;
        size[x] += size[y];
        return true;
    }
};

// === ========== Segment Tree (Sum) ========== ===
struct SegmentTree {
    int n;
    vi tree;
    SegmentTree(int _n) {
        n = _n;
        tree.assign(4 * n, 0);
    }
    void build(vi &a, int v, int tl, int tr) {
        if (tl == tr) tree[v] = a[tl];
        else {
            int tm = (tl + tr) / 2;
            build(a, 2*v, tl, tm);
            build(a, 2*v+1, tm+1, tr);
            tree[v] = tree[2*v] + tree[2*v+1];
        }
    }
    void update(int v, int tl, int tr, int pos, int val) {
        if (tl == tr) tree[v] = val;
        else {
            int tm = (tl + tr) / 2;
            if (pos <= tm) update(2*v, tl, tm, pos, val);
            else update(2*v+1, tm+1, tr, pos, val);
            tree[v] = tree[2*v] + tree[2*v+1];
        }
    }
    int query(int v, int tl, int tr, int l, int r) {
        if (l > r) return 0;
        if (l == tl && r == tr) return tree[v];
        int tm = (tl + tr) / 2;
        return query(2*v, tl, tm, l, min(r, tm)) +
               query(2*v+1, tm+1, tr, max(l, tm+1), r);
    }
};

// === ========== Fenwick Tree / BIT ========== ===
struct Fenwick {
    int n;
    vi bit;
    Fenwick(int _n) {
        n = _n + 1;
        bit.assign(n, 0);
    }
    void update(int i, int delta) {
        for (++i; i < n; i += i & -i)
            bit[i] += delta;
    }
    int query(int i) {
        int res = 0;
        for (++i; i > 0; i -= i & -i)
            res += bit[i];
        return res;
    }
    int range_query(int l, int r) {
        return query(r) - query(l - 1);
    }
};

// === ========== Solve Function ========== ===
void solve() {
    // Write your logic here
    int n; cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];

    // Example usage of Segment Tree:
    SegmentTree seg(n);
    seg.build(a, 1, 0, n - 1);
    cout << seg.query(1, 0, n - 1, 0, n - 1) << endl;
}

// === ========== Main ========== ===
int32_t main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
