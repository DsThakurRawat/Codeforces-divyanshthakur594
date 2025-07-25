// --------------------- Competitive Programming Template ---------------------

#include <bits/stdc++.h>
using namespace std;

// Optional: For ordered_set and ordered_multiset
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// Ordered Set Template
template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<int> s;  s.find_by_order(k), s.order_of_key(x)

#define int int64_t
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vi>
#define vpii vector<pii>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)
#define uniq(x) x.resize(unique(all(x)) - x.begin())

const int INF = 1e18;
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const double PI = 3.141592653589793238462;
const int N = 2e5 + 5;

// --------------------- Fast I/O ---------------------
void fastio() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

// --------------------- Debugging ---------------------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(bool x) { cerr << (x ? "true" : "false"); }
template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template <class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]"; }
template <class T> void _print(set<T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]"; }
template <class T> void _print(multiset<T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]"; }
template <class T, class V> void _print(map<T, V> v) { cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]"; }

// --------------------- Utility Functions ---------------------
int gcd(int a, int b) { return __gcd(a, b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
int binpow(int a, int b, int m = MOD) {
    int res = 1; a %= m;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int modinv(int a, int m = MOD) { return binpow(a, m - 2, m); }

// --------------------- DSU / Disjoint Set Union ---------------------
struct DSU {
    vi parent, sz;
    DSU(int n) {
        parent.resize(n); sz.assign(n, 1);
        iota(all(parent), 0);
    }
    int find(int x) {
        return parent[x] = (parent[x] == x ? x : find(parent[x]));
    }
    bool unite(int x, int y) {
        x = find(x); y = find(y);
        if (x == y) return false;
        if (sz[x] < sz[y]) swap(x, y);
        parent[y] = x;
        sz[x] += sz[y];
        return true;
    }
};

// --------------------- Binary Indexed Tree (Fenwick Tree) ---------------------
struct BIT {
    vi bit;
    int n;
    BIT(int n) { this->n = n + 1; bit.assign(n + 2, 0); }
    void update(int i, int val) {
        for (++i; i < n; i += i & -i) bit[i] += val;
    }
    int query(int i) {
        int res = 0;
        for (++i; i > 0; i -= i & -i) res += bit[i];
        return res;
    }
    int query(int l, int r) { return query(r) - query(l - 1); }
};

// --------------------- Segment Tree ---------------------
struct SegmentTree {
    int n;
    vi tree;
    SegmentTree(int size) {
        n = size;
        tree.assign(4 * n, 0);
    }
    void build(vi &a, int v, int tl, int tr) {
        if (tl == tr) {
            tree[v] = a[tl];
        } else {
            int tm = (tl + tr) / 2;
            build(a, 2*v, tl, tm);
            build(a, 2*v+1, tm+1, tr);
            tree[v] = tree[2*v] + tree[2*v+1];
        }
    }
    void update(int v, int tl, int tr, int pos, int new_val) {
        if (tl == tr) tree[v] = new_val;
        else {
            int tm = (tl + tr) / 2;
            if (pos <= tm) update(2*v, tl, tm, pos, new_val);
            else update(2*v+1, tm+1, tr, pos, new_val);
            tree[v] = tree[2*v] + tree[2*v+1];
        }
    }
    int query(int v, int tl, int tr, int l, int r) {
        if (l > r) return 0;
        if (l == tl && r == tr) return tree[v];
        int tm = (tl + tr) / 2;
        return query(2*v, tl, tm, l, min(r, tm)) + query(2*v+1, tm+1, tr, max(l, tm+1), r);
    }
};

// --------------------- Sparse Table (for RMQ) ---------------------
struct SparseTable {
    int n;
    vector<vi> st;
    SparseTable(const vi &a) {
        n = sz(a);
        int max_log = __lg(n) + 1;
        st.assign(n, vi(max_log));
        for (int i = 0; i < n; ++i) st[i][0] = a[i];
        for (int j = 1; (1 << j) <= n; ++j)
            for (int i = 0; i + (1 << j) <= n; ++i)
                st[i][j] = min(st[i][j-1], st[i+(1<<(j-1))][j-1]);
    }
    int query(int l, int r) {
        int j = __lg(r - l + 1);
        return min(st[l][j], st[r - (1 << j) + 1][j]);
    }
};

// --------------------- Main Function ---------------------
void solve() {
    // your solution here
}

int32_t main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
