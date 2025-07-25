/**************************************************
* Author     : Divyansh Thakur Rawat
* Template   : Ultimate CP Template for CF/AtCoder
**************************************************/

#include <bits/stdc++.h>
using namespace std;

// === Fast I/O ===
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// === Typedefs and Shortcuts ===
#define int int64_t
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x))
#define endl '\n'

// === Constants ===
const int INF = 1e18;
const int MOD = 998244353;
const int MOD2 = 1e9 + 7;
const double PI = acos(-1.0);

// === Loops ===
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define per(i, a, b) for(int i = a; i >= b; --i)
#define each(x, a) for(auto &x : a)

// === Debugging ===
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(bool x) { cerr << x; }
template<class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template<class T> void _print(vector<T> v) { cerr << "[ "; for(T i : v) {_print(i); cerr << " "; } cerr << "]"; }

// === Modular Arithmetic ===
int mod_add(int a, int b, int m = MOD) { return ((a % m + b % m) % m); }
int mod_sub(int a, int b, int m = MOD) { return ((a % m - b % m + m) % m); }
int mod_mul(int a, int b, int m = MOD) { return ((a % m) * (b % m)) % m; }
int mod_pow(int a, int b, int m = MOD) {
    int res = 1; a %= m;
    while(b) {
        if(b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}
int mod_inv(int a, int m = MOD) { return mod_pow(a, m - 2, m); }

// === Binary Search Helpers ===
int firstTrue(function<bool(int)> f, int lo, int hi) {
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        (f(mid) ? hi : lo) = mid;
    }
    return lo;
}
int lastTrue(function<bool(int)> f, int lo, int hi) {
    while (lo < hi) {
        int mid = lo + (hi - lo + 1) / 2;
        (f(mid) ? lo : hi) = mid;
    }
    return lo;
}

// === Number Theory ===
vi smallest_prime;
void sieve(int N) {
    smallest_prime.assign(N + 1, 0);
    for (int i = 2; i <= N; i++) {
        if (smallest_prime[i] == 0) {
            for (int j = i; j <= N; j += i)
                if (smallest_prime[j] == 0) smallest_prime[j] = i;
        }
    }
}
vi prime_factors(int x) {
    vi res;
    while (x > 1) {
        res.pb(smallest_prime[x]);
        x /= smallest_prime[x];
    }
    return res;
}
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

// === Grid Movement ===
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
int dx8[] = {-1,-1,-1,0,1,1,1,0};
int dy8[] = {-1,0,1,1,1,0,-1,-1};

// === DSU ===
struct DSU {
    vi parent, size;
    DSU(int n) {
        parent.resize(n);
        size.assign(n, 1);
        iota(all(parent), 0);
    }
    int find(int x) {
        return (x == parent[x] ? x : parent[x] = find(parent[x]));
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

// === Fenwick Tree (BIT) ===
struct Fenwick {
    int n; vi bit;
    Fenwick(int _n) { n = _n + 1; bit.assign(n, 0); }
    void update(int i, int delta) { for (++i; i < n; i += i & -i) bit[i] += delta; }
    int query(int i) {
        int res = 0;
        for (++i; i > 0; i -= i & -i) res += bit[i];
        return res;
    }
    int range_query(int l, int r) { return query(r) - query(l - 1); }
};

// === Segment Tree with Lazy Propagation ===
struct SegmentTree {
    int n;
    vi tree, lazy;
    SegmentTree(int _n) {
        n = _n;
        tree.assign(4 * n, 0);
        lazy.assign(4 * n, 0);
    }
    void push(int v, int tl, int tr) {
        if (lazy[v]) {
            tree[v] += lazy[v] * (tr - tl + 1);
            if (tl != tr) {
                lazy[2*v] += lazy[v];
                lazy[2*v+1] += lazy[v];
            }
            lazy[v] = 0;
        }
    }
    void update(int v, int tl, int tr, int l, int r, int val) {
        push(v, tl, tr);
        if (l > r) return;
        if (l == tl && r == tr) {
            lazy[v] += val;
            push(v, tl, tr);
        } else {
            int tm = (tl + tr)/2;
            update(2*v, tl, tm, l, min(r, tm), val);
            update(2*v+1, tm+1, tr, max(l, tm+1), r, val);
            tree[v] = tree[2*v] + tree[2*v+1];
        }
    }
    int query(int v, int tl, int tr, int l, int r) {
        if (l > r) return 0;
        push(v, tl, tr);
        if (l == tl && r == tr) return tree[v];
        int tm = (tl + tr)/2;
        return query(2*v, tl, tm, l, min(r, tm)) + query(2*v+1, tm+1, tr, max(l, tm+1), r);
    }
};

// === Sparse Table for RMQ (Min) ===
struct SparseTable {
    vvi st;
    vi log;
    SparseTable(vi &a) {
        int n = sz(a);
        log.assign(n+1, 0);
        for (int i = 2; i <= n; ++i)
            log[i] = log[i/2] + 1;
        int k = log[n];
        st.assign(n, vi(k+1));
        for (int i = 0; i < n; ++i) st[i][0] = a[i];
        for (int j = 1; j <= k; ++j)
            for (int i = 0; i + (1 << j) <= n; ++i)
                st[i][j] = min(st[i][j-1], st[i + (1 << (j-1))][j-1]);
    }
    int query(int l, int r) {
        int j = log[r - l + 1];
        return min(st[l][j], st[r - (1 << j) + 1][j]);
    }
};

// === Polynomial Rolling Hash ===
struct StringHash {
    const int p = 31;
    const int mod = MOD;
    vi hash, power;
    StringHash(string &s) {
        int n = s.length();
        hash.resize(n+1);
        power.assign(n+1, 1);
        for (int i = 1; i <= n; i++) {
            hash[i] = (hash[i-1]*p + (s[i-1]-'a'+1)) % mod;
            power[i] = (power[i-1]*p) % mod;
        }
    }
    int get_hash(int l, int r) {
        return (hash[r+1] - hash[l]*power[r-l+1] % mod + mod) % mod;
    }
};

// === Solve Function ===
void solve() {
    // Example: Sieve usage
    sieve(1000000);
    int n; cin >> n;
    vi a(n); rep(i, 0, n) cin >> a[i];
    sort(all(a));
    cout << "Sorted: "; each(x, a) cout << x << " "; cout << endl;
}

// === Main ===
int32_t main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
