/**************************************************
* Author     : Divyansh Thakur Rawat
* Template   : Ultimate CP Template for CF/AtCoder
**************************************************/
#include <bits/stdc++.h>


using namespace std;

// === Constants ===
#define INF 1e9
#define INF64 9223372036854775807LL
#define NINF64 -9223372036854775807LL
#define MOD 998244353
#define MOD2 1000000007
#define PI 3.141592653589793238462

// === Type Definitions ===


// === Macros ===
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

// === Loops ===
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)
#define rep0(i, n) for (int i = 0; i < n; ++i)
#define each(x, a) for (auto &x : a)

// === Fast I/O ===
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// === Directions for Grid ===
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
const int dx8[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy8[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

// === Modular Arithmetic ===
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
int mod_inv(int a, int m = MOD) { return mod_pow(a, m - 2, m); }

// === Math Utilities ===
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
bool isPowerOfTwo(int x) { return x && !(x & (x - 1)); }

// === DSU ===
struct DSU {
    vi parent, size;
    DSU(int n) {
        parent.resize(n); size.assign(n, 1);
        iota(all(parent), 0);
    }
    int find(int x) {
        if (x == parent[x]) return x;
        return parent[x] = find(parent[x]);
    }
    bool unite(int x, int y) {
        x = find(x), y = find(y);
        if (x == y) return false;
        if (size[x] < size[y]) swap(x, y);
        parent[y] = x; size[x] += size[y];
        return true;
    }
};

// === Segment Tree ===
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
    int query(int v, int tl, int tr, int l, int r) {
        if (l > r) return 0;
        if (l == tl && r == tr) return tree[v];
        int tm = (tl + tr) / 2;
        return query(2*v, tl, tm, l, min(r, tm)) +
               query(2*v+1, tm+1, tr, max(l, tm+1), r);
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
};

// === Fenwick Tree (BIT) ===
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

// === Main Function ===
int32_t main() {
    fastio;

    int t = 1;
    // cin >> t;
    while (t--) {
        // Your code here
    }

    return 0;
}