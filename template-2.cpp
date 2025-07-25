/**************************************************
* Author    : Divyansh Thakur Rawat
* Template  : Ultimate Competitive Programming Template
**************************************************/

#include <bits/stdc++.h>
using namespace std;

// === ========== Fast I/O ========== ===
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// === ========== Typedefs & Macros ========== ===
#define int int64_t
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
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
const double PI = acos(-1.0);

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
template<class T, class V> void _print(map<T, V> m) { cerr << "{ "; for(auto i : m) _print(i); cerr << " }"; }

// === ========== PBDS ========== ===
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<int> s; s.insert(1); s.order_of_key(2); *s.find_by_order(0);

// === ========== Geometry Utils ========== ===
struct Point {
    double x, y;
    Point(double _x=0, double _y=0) : x(_x), y(_y) {}
};
double dist(Point a, Point b) {
    return hypot(a.x - b.x, a.y - b.y);
}
double cross(Point a, Point b) {
    return a.x * b.y - a.y * b.x;
}
double dot(Point a, Point b) {
    return a.x * b.x + a.y * b.y;
}

// === ========== Floating-point Helpers ========== ===
bool is_equal(double a, double b, double eps = 1e-9) {
    return fabs(a - b) < eps;
}

// === ========== Matrix Exponentiation ========== ===
typedef vector<vector<int>> matrix;
matrix mat_mul(matrix &a, matrix &b, int mod = MOD2) {
    int n = a.size();
    matrix res(n, vector<int>(n));
    rep(i,0,n) rep(j,0,n) rep(k,0,n)
        res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % mod;
    return res;
}
matrix mat_pow(matrix base, int exp, int mod = MOD2) {
    int n = base.size();
    matrix res(n, vector<int>(n));
    rep(i,0,n) res[i][i] = 1;
    while(exp) {
        if(exp & 1) res = mat_mul(res, base, mod);
        base = mat_mul(base, base, mod);
        exp >>= 1;
    }
    return res;
}

// === ========== Trie / String Algorithms ========== ===
struct TrieNode {
    TrieNode* next[26];
    bool is_end = false;
    TrieNode() { fill(begin(next), end(next), nullptr); }
};
void insert(TrieNode* root, const string &s) {
    TrieNode* node = root;
    for(char c : s) {
        if(!node->next[c - 'a']) node->next[c - 'a'] = new TrieNode();
        node = node->next[c - 'a'];
    }
    node->is_end = true;
}
bool search(TrieNode* root, const string &s) {
    TrieNode* node = root;
    for(char c : s) {
        if(!node->next[c - 'a']) return false;
        node = node->next[c - 'a'];
    }
    return node->is_end;
}

// === ========== Main Function ========== ===
int32_t main() {
    fastio;
    int t = 1;
    // cin >> t;
    while(t--) {
        // solve();
    }
    return 0;
}
