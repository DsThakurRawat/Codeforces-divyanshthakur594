#include <bits/stdc++.h>
using namespace std;

// ---------- MACROS & TYPEDEFS ----------
#define int int64_t
#define endl '\n'
#define vi vector<int>
#define vb vector<bool>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define yes cout << "YES\n"
#define no cout << "NO\n"

// ---------- CONSTANTS ----------
const int INF = 1e18;
const int MOD = 998244353;
const int MOD2 = 1e9 + 7;
const double PI = 3.141592653589793238462;
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};

// ---------- FAST I/O ----------
void fastIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

// ---------- RANDOM NUMBER GENERATOR ----------
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
int rand_int(int l, int r) {
    return uniform_int_distribution<int>(l, r)(rng);
}

// ---------- DEBUG UTILITY ----------
#ifdef LOCAL
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

template<class T> void _print(T t) {cerr << t;}
template<class T, class V> void _print(pair<T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template<class T> void _print(vector<T> v) {cerr << "["; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template<class T> void _print(set<T> v) {cerr << "["; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template<class T, class V> void _print(map<T, V> v) {cerr << "["; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// ---------- MATH UTILS ----------
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
int power(int a, int b, int mod = MOD) {
    int res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
int modinv(int a, int mod = MOD) { return power(a, mod - 2, mod); }

// ---------- DSU (Disjoint Set Union) ----------
struct DSU {
    vi parent, size;
    DSU(int n) {
        parent.resize(n);
        size.assign(n, 1);
        iota(all(parent), 0);
    }
    int find(int x) {
        if (x == parent[x]) return x;
        return parent[x] = find(parent[x]);
    }
    void unite(int a, int b) {
        a = find(a); b = find(b);
        if (a != b) {
            if (size[a] < size[b]) swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};

// ---------- SEGMENT TREE ----------
struct SegmentTree {
    int n;
    vi tree;
    SegmentTree(int size) {
        n = size;
        tree.resize(4 * n, 0);
    }
    void build(vi &a, int v, int tl, int tr) {
        if (tl == tr) tree[v] = a[tl];
        else {
            int tm = (tl + tr) / 2;
            build(a, v * 2, tl, tm);
            build(a, v * 2 + 1, tm + 1, tr);
            tree[v] = tree[v * 2] + tree[v * 2 + 1];
        }
    }
    int sum(int v, int tl, int tr, int l, int r) {
        if (l > r) return 0;
        if (l == tl && r == tr) return tree[v];
        int tm = (tl + tr) / 2;
        return sum(v*2, tl, tm, l, min(r, tm))
             + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
    }
    void update(int v, int tl, int tr, int pos, int new_val) {
        if (tl == tr) tree[v] = new_val;
        else {
            int tm = (tl + tr) / 2;
            if (pos <= tm) update(v*2, tl, tm, pos, new_val);
            else update(v*2+1, tm+1, tr, pos, new_val);
            tree[v] = tree[v*2] + tree[v*2+1];
        }
    }
};

// ---------- BINARY INDEXED TREE (FENWICK TREE) ----------
struct BIT {
    int n;
    vi bit;
    BIT(int size) {
        n = size + 1;
        bit.assign(n, 0);
    }
    void update(int i, int delta) {
        for (++i; i < n; i += i & -i) bit[i] += delta;
    }
    int query(int i) {
        int res = 0;
        for (++i; i > 0; i -= i & -i) res += bit[i];
        return res;
    }
    int query(int l, int r) {
        return query(r) - query(l - 1);
    }
};

// ---------- SPARSE TABLE ----------
struct SparseTable {
    vector<vi> st;
    vi log;
    SparseTable(vi &a) {
        int n = sz(a);
        log.resize(n + 1);
        log[1] = 0;
        for (int i = 2; i <= n; ++i) log[i] = log[i/2] + 1;
        int K = log[n] + 1;
        st.assign(n, vi(K));
        for (int i = 0; i < n; i++) st[i][0] = a[i];
        for (int j = 1; j < K; ++j)
            for (int i = 0; i + (1 << j) <= n; ++i)
                st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
    }
    int query(int L, int R) {
        int j = log[R - L + 1];
        return min(st[L][j], st[R - (1 << j) + 1][j]);
    }
};

// ---------- GRAPH TEMPLATES ----------
void dfs(int node, int parent, vi adj[], vb &visited) {
    visited[node] = true;
    for (int child : adj[node]) {
        if (child != parent && !visited[child]) {
            dfs(child, node, adj, visited);
        }
    }
}

void bfs(int src, vi adj[], vi &dist) {
    queue<int> q;
    q.push(src);
    dist[src] = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

void dijkstra(int src, vector<vpii> &adj, vi &dist) {
    int n = sz(adj);
    dist.assign(n, INF);
    dist[src] = 0;
    priority_queue<pair<int,int>, vpii, greater<>> pq;
    pq.push({0, src});
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d != dist[u]) continue;
        for (auto &[v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

// ---------- MAIN SOLVER ----------
void solve() {
    // your code here
}

// ---------- MAIN FUNCTION ----------
int32_t main() {
    fastIO();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
