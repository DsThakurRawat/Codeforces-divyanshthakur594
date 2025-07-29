/**************************************************
* Author    : Divyansh Thakur Rawat
* Template  :  Template-3-ultimate 
**************************************************/
// will work seamlessly on any os and system

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// <-------------------- Typedefs and Macros -------------------->
#pragma region typedefs_macros
#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pii>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define usi unordered_set<int>
#define si set<int>
#define msi multiset<int>
#define msi2 multimap<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repr(i, a, b) for (int i = a; i >= b; i--)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define minpq priority_queue<int, vector<int>, greater<int>>
#define maxpque priority_queue<int>
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> ordered_map;
#pragma endregion

// -------------------- Fast I/O and Debug --------------------
#pragma region fast_io_debug
void fastIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
void _print(int x) {cerr << x;}
void _print(string x) {cerr << x;}
void _print(char x) {cerr << x;}
void _print(double x) {cerr << x;}
template<class T> void _print(vector<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
#pragma endregion

// -------------------- STL Container Headers --------------------
#pragma region stl_containers
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#pragma endregion

// === STL Container Macros ===
#define st    stack
#define qu    queue
#define de      deque
#define maxpq    priority_queue

#define stk       stack<int>
#define que       queue<int>
#define deq       deque<int>
#define maxpqint    priority_queue<int>

#define si        set<int>
#define msi       multiset<int>
#define usi       unordered_set<int>
#define umsi      unordered_multiset<int>

#define mi        map<int, int>
#define mmi       multimap<int, int>
#define umi       unordered_map<int, int>
#define ummi      unordered_multimap<int, int>

// Priority Queues
#define maxpqint     priority_queue<int>
#define minpq     priority_queue<int, vector<int>, greater<int>>

// === Vector/Pair Utils ===
#define vi        vector<int>
#define vvi       vector<vector<int>>
#define pii       pair<int, int>
#define vpi       vector<pii>
#define vvpi      vector<vector<pii>>
#define vll       vector<long long > 

//<---------------Loops--------------------------------------->




//<-------------------- Disjoint Set Union -------------------->
#pragma region DSU
struct DSU {
    vi parent, size;
    DSU(int n) {
        parent.resize(n); size.resize(n, 1);
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
#pragma endregion

//<-------------------- Segment Tree -------------------->
#pragma region SegmentTree
struct SegmentTree {
    int n;
    vi tree;
    SegmentTree(int sz) {
        n = sz; tree.assign(4 * n, 0);
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
            int tm = (tl + tr)/2;
            if (pos <= tm) update(2*v, tl, tm, pos, val);
            else update(2*v+1, tm+1, tr, pos, val);
            tree[v] = tree[2*v] + tree[2*v+1];
        }
    }
    int query(int v, int tl, int tr, int l, int r) {
        if (l > r) return 0;
        if (l == tl && r == tr) return tree[v];
        int tm = (tl + tr)/2;
        return query(2*v, tl, tm, l, min(r, tm)) + query(2*v+1, tm+1, tr, max(l, tm+1), r);
    }
};
#pragma endregion

//<-------------------- Trie -------------------->
#pragma region Trie
struct TrieNode {
    TrieNode* children[26];
    bool isEnd;
    TrieNode() { fill(begin(children), end(children), nullptr); isEnd = false; }
};
struct Trie {
    TrieNode* root;
    Trie() { root = new TrieNode(); }
    void insert(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (!node->children[ch - 'a'])
                node->children[ch - 'a'] = new TrieNode();
            node = node->children[ch - 'a'];
        }
        node->isEnd = true;
    }
    bool search(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (!node->children[ch - 'a']) return false;
            node = node->children[ch - 'a'];
        }
        return node->isEnd;
    }
};
#pragma endregion

//<-------------------- Matrix Exponentiation -------------------->
#pragma region MatrixExponentiation
const int MOD = 1e9+7;
vector<vector<int>> multiply(vector<vector<int>> &a, vector<vector<int>> &b) {
    int n = a.size(); vector<vector<int>> res(n, vector<int>(n));
    rep(i, 0, n) rep(j, 0, n) rep(k, 0, n)
        res[i][j] = (res[i][j] + a[i][k]*b[k][j]) % MOD;
    return res;
}
vector<vector<int>> power(vector<vector<int>> a, int p) {
    int n = a.size(); vector<vector<int>> res(n, vector<int>(n));
    rep(i, 0, n) res[i][i] = 1;
    while (p) {
        if (p & 1) res = multiply(res, a);
        a = multiply(a, a); p >>= 1;
    }
    return res;
}
#pragma endregion

//<-------------------- Geometry -------------------->
#pragma region Geometry
const double EPS = 1e-9;
bool eq(double a, double b) { return fabs(a - b) < EPS; }
struct Point {
    double x, y;
    Point(double x = 0, double y = 0): x(x), y(y) {}
    Point operator + (const Point &p) const { return Point(x + p.x, y + p.y); }
    Point operator - (const Point &p) const { return Point(x - p.x, y - p.y); }
    double cross(const Point &p) const { return x * p.y - y * p.x; }
    double dot(const Point &p) const { return x * p.x + y * p.y; }
    double norm() const { return sqrt(x * x + y * y); }
};
#pragma endregion

//<-------------------- Graph Algorithms -------------------->
#pragma region GraphAlgorithms
vector<int> dijkstra(int src, vector<vector<pii>> &adj, int n) {
    vi dist(n, LLONG_MAX);
    priority_queue<pii, vector<pii>, greater<>> pq;
    dist[src] = 0; pq.push({0, src});
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d != dist[u]) continue;
        for (auto &[v, w] : adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}
vector<int> topo_sort(int n, vector<vector<int>> &adj) {
    vector<int> indeg(n), res;
    for (auto &v : adj) for (int x : v) indeg[x]++;
    queue<int> q;
    rep(i, 0, n) if (!indeg[i]) q.push(i);
    while (!q.empty()) {
        int u = q.front(); q.pop(); res.push_back(u);
        for (int v : adj[u]) if (--indeg[v] == 0) q.push(v);
    }
    return res;
}
void floyd_warshall(vector<vector<int>> &dist, int n) {
    rep(k, 0, n) rep(i, 0, n) rep(j, 0, n)
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}
#pragma endregion

//<-------------------- Leetcode-style Data Structures -------------------->
#pragma region LeetcodeHelpers
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

using Graph = vector<vector<int>>; // Adjacency list graph representation
#pragma endregion

//<-------------------- Trie -------------------->
/*

C++ Operator Keyword Equivalents (Normal Format):
1. || → or

2. && → and

3. ! → not

4. | → bitor

5. & → bitand

6. ^ → xor

7. ~ → compl

8. != → not_eq

9. == → (no keyword, just use ==)



*/









//<-------------------- Problem Rough  -------------------->
/*
 
// there are n candidates players in the competition that will be trained 
by pak chanekk
// the ith candidate has Pi power
// he can form zero or more teams from n candidates

enemy team has power D
he team sent is said to defeat the enemy team if the sum of powers from the formed players is strictly greater than D
.



// one of pak chaneks skill is that when a team that has been formed plays in a match 
he can change the powwer of each player in the team to be equal to the biggest player power

//  Determine the maximum number of wins that can be achieved by Pak Chanek.

larger power guys are important 
50 60 70 80 90 100

     
*/

//<-------------------- Solve Function -------------------->
void solve() {
    int N,D;
    cin >> N >> D;

    vll P(N);

    for(long long i = 0; i < N; i++) {
        long long x;
        cin >> x;
        P.push_back(x);
    }
//test case analysis 
/*
1 test = 10^8 ops
N = 10^5
0(N*N) will not work
O(n)
O(nlogn)

so yeah

*/
int left = -1;
int right = P.size() - 1;

int Teamcount = 0;
int teamsize = 1;
while(left < right){
    if((P[right]*teamsize) <= D && left < right){
        left++;
        teamsize++;


    }
    else{
        Teamcount++;
        team
    }



}









        


    

    



}

//<-------------------- Main Driver -------------------->
signed main() {
    fastIO();
   // int t;
   // cin >> t;
    //while (t--) 
    solve();
    return 0;
}
