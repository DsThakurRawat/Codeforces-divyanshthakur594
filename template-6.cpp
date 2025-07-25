// Author: Divyansh Thakur Rawat
#include<bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'

// Types & Macros
#define int int64_t
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vpii vector<pii>
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define MOD 1000000007
#define MOD2 998244353
#define INF 1e18
#define PI 3.14159265358979323846

// Debug (toggle off in contest)
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int x) {cerr << x;}
void _print(string x) {cerr << x;}
void _print(char x) {cerr << x;}
void _print(double x) {cerr << x;}
template<class T, class V> void _print(pair<T,V> p){cerr<<"{";_print(p.ff);cerr<<",";_print(p.ss);cerr<<"}";}
template<class T> void _print(vector<T> v){cerr<<"[ "; for(T i:v){_print(i);cerr<<" ";} cerr<<"]";}
template<class T> void _print(set<T> v){cerr<<"[ "; for(T i:v){_print(i);cerr<<" ";} cerr<<"]";}
template<class T> void _print(multiset<T> v){cerr<<"[ "; for(T i:v){_print(i);cerr<<" ";} cerr<<"]";}
template<class T, class V> void _print(map<T,V> v){cerr<<"[ "; for(auto i:v){_print(i);cerr<<" ";} cerr<<"]";}

// GCD / LCM
int gcd(int a, int b) { return __gcd(a, b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

// Binary Exponentiation
int binexp(int a, int b, int m = MOD) {
    int res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// Modular Inverse (only when MOD is prime)
int modinv(int a, int m = MOD) { return binexp(a, m - 2, m); }

// DSU
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
    bool unite(int x, int y) {
        x = find(x), y = find(y);
        if (x == y) return false;
        if (size[x] < size[y]) swap(x, y);
        parent[y] = x;
        size[x] += size[y];
        return true;
    }
};

// Fenwick Tree / Binary Indexed Tree
struct BIT {
    int n;
    vi bit;
    BIT(int size) { n = size + 1; bit.assign(n, 0); }
    void update(int i, int val) {
        for (++i; i < n; i += i & -i) bit[i] += val;
    }
    int query(int i) {
        int res = 0;
        for (++i; i > 0; i -= i & -i) res += bit[i];
        return res;
    }
    int range_query(int l, int r) { return query(r) - query(l - 1); }
};

// Segment Tree
struct SegTree {
    int n;
    vi tree;
    SegTree(int size) {
        n = size;
        tree.assign(4 * n, 0);
    }
    void build(vi &a, int v, int tl, int tr) {
        if (tl == tr) tree[v] = a[tl];
        else {
            int tm = (tl + tr) / 2;
            build(a, v*2, tl, tm);
            build(a, v*2+1, tm+1, tr);
            tree[v] = tree[v*2] + tree[v*2+1];
        }
    }
    int query(int v, int tl, int tr, int l, int r) {
        if (l > r) return 0;
        if (l == tl && r == tr) return tree[v];
        int tm = (tl + tr) / 2;
        return query(v*2, tl, tm, l, min(r, tm)) +
               query(v*2+1, tm+1, tr, max(l, tm+1), r);
    }
    void update(int v, int tl, int tr, int pos, int val) {
        if (tl == tr) tree[v] = val;
        else {
            int tm = (tl + tr) / 2;
            if (pos <= tm) update(v*2, tl, tm, pos, val);
            else update(v*2+1, tm+1, tr, pos, val);
            tree[v] = tree[v*2] + tree[v*2+1];
        }
    }
};

// Sieve of Eratosthenes
vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i)
        if (is_prime[i])
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
    return is_prime;
}

// BFS / DFS Template
void bfs(int src, vector<vi>& adj, vi& dist) {
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

void dfs(int u, int p, vector<vi>& adj, vi& vis) {
    vis[u] = 1;
    for (int v : adj[u]) {
        if (v != p && !vis[v])
            dfs(v, u, adj, vis);
    }
}

// PBDS (for ordered_set/multiset) - Only works on GNU C++
/*
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

// Main
void solve() {
    // Your code here
}

int32_t main() {
    fastio();
    int t = 1;
    // cin >> t;
    while(t--) solve();
}
