// =================== MAX COMPETITIVE PROGRAMMING TEMPLATE ===================
// Author: Divyansh Thakur
// Supports: Codeforces, AtCoder, ICPC, LeetCode, etc.
// Includes: STL, Graphs, DSU, Segment Tree, BIT, PBDS, Geometry, Strings, etc.

#include <bits/stdc++.h>
using namespace std;

// =================== PBDS ===================
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// =================== MACROS ===================
#define int long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ff first
#define ss second
#define sz(x) (int)(x).size()
#define vi vector<int>
#define pii pair<int,int>
#define vpi vector<pii>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define debug(x) cerr << #x << " = " << x << endl

// =================== STL Containers ===================
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

// ========== Fast I/O ==========
void fastio() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

// =================== MODULAR ARITHMETIC ===================
const int MOD = 1e9+7;
int add(int a, int b) { return (a+b)%MOD; }
int mul(int a, int b) { return (a*b)%MOD; }
int sub(int a, int b) { return ((a-b)%MOD + MOD)%MOD; }
int power(int a, int b) {
    int res = 1;
    while(b) {
        if(b&1) res = mul(res,a);
        a = mul(a,a); b >>= 1;
    }
    return res;
}
int inv(int a) { return power(a, MOD-2); }

// =================== DSU ===================
struct DSU {
    vi par, sz;
    DSU(int n) {
        par.resize(n+1); sz.assign(n+1,1);
        iota(par.begin(), par.end(), 0);
    }
    int find(int x) {
        if(par[x] == x) return x;
        return par[x] = find(par[x]);
    }
    void unite(int x, int y) {
        x = find(x); y = find(y);
        if(x != y) {
            if(sz[x] < sz[y]) swap(x,y);
            par[y] = x; sz[x] += sz[y];
        }
    }
};

// =================== SEGMENT TREE ===================
struct SegmentTree {
    int n; vi tree;
    SegmentTree(int sz) {
        n = sz; tree.assign(4*n, 0);
    }
    void build(int node, int l, int r, vi &a) {
        if(l==r) { tree[node] = a[l]; return; }
        int m = (l+r)/2;
        build(2*node, l, m, a);
        build(2*node+1, m+1, r, a);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
    int query(int node, int l, int r, int ql, int qr) {
        if(r < ql || l > qr) return 0;
        if(ql <= l && r <= qr) return tree[node];
        int m = (l+r)/2;
        return query(2*node,l,m,ql,qr) + query(2*node+1,m+1,r,ql,qr);
    }
    void update(int node, int l, int r, int idx, int val) {
        if(l == r) { tree[node] = val; return; }
        int m = (l+r)/2;
        if(idx <= m) update(2*node,l,m,idx,val);
        else update(2*node+1,m+1,r,idx,val);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
};

// =================== BINARY INDEXED TREE (Fenwick Tree) ===================
struct BIT {
    vi bit; int n;
    BIT(int size) { n = size; bit.assign(n+1, 0); }
    void update(int idx, int val) {
        while(idx <= n) { bit[idx] += val; idx += idx & -idx; }
    }
    int query(int idx) {
        int res = 0;
        while(idx > 0) { res += bit[idx]; idx -= idx & -idx; }
        return res;
    }
};

// =================== GEOMETRY ===================
struct Point {
    double x, y;
    Point(double x=0, double y=0) : x(x), y(y) {}
    Point operator+(const Point &p) const { return Point(x+p.x, y+p.y); }
    Point operator-(const Point &p) const { return Point(x-p.x, y-p.y); }
    double cross(const Point &p) const { return x*p.y - y*p.x; }
    double dot(const Point &p) const { return x*p.x + y*p.y; }
    double norm() const { return sqrt(x*x + y*y); }
};

// =================== FLOATING POINT HELPERS ===================
#define EPS 1e-9
bool eq(double a, double b) { return fabs(a-b) < EPS; }

// =================== MATRIX EXPONENTIATION ===================
using matrix = vector<vi>;
matrix mul(matrix &a, matrix &b) {
    int n = a.size(); matrix c(n, vi(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) for(int k=0;k<n;k++)
        c[i][j] = (c[i][j] + a[i][k]*b[k][j]) % MOD;
    return c;
}
matrix mat_pow(matrix a, int p) {
    int n = a.size(); matrix res(n, vi(n));
    for(int i=0;i<n;i++) res[i][i] = 1;
    while(p) {
        if(p&1) res = mul(res,a);
        a = mul(a,a); p >>= 1;
    }
    return res;
}

// =================== TRIE ===================
struct TrieNode {
    TrieNode* child[26];
    bool isEnd;
    TrieNode() { isEnd = false; fill(child, child+26, nullptr); }
};
void insert(TrieNode* root, string s) {
    TrieNode* node = root;
    for(char c : s) {
        if(!node->child[c-'a']) node->child[c-'a'] = new TrieNode();
        node = node->child[c-'a'];
    }
    node->isEnd = true;
}

// =================== STRING ALGORITHMS ===================
vi prefix_function(string s) {
    int n = s.size(); vi pi(n);
    for(int i=1,j=0;i<n;i++) {
        while(j>0 && s[i]!=s[j]) j=pi[j-1];
        if(s[i]==s[j]) j++;
        pi[i]=j;
    }
    return pi;
}

vi z_function(string s) {
    int n = s.length(); vi z(n);
    for(int i = 1, l = 0, r = 0; i < n; ++i) {
        if(i <= r) z[i] = min(r - i + 1, z[i - l]);
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) ++z[i];
        if(i + z[i] - 1 > r) l = i, r = i + z[i] - 1;
    }
    return z;
}

// =================== MAIN FUNCTION ===================
signed main() {
    fastio();
    
    int t = 1;
    // cin >> t;
    while(t--) {
        // solve();
    }

    return 0;
}

// =================== END OF TEMPLATE ===================
