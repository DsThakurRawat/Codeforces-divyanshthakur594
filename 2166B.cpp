//divyansh Res-Set template
#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
#define INF64 9223372036854775807LL
#define NINF64 -9223372036854775807LL
#define MOD 1000000007
#define MOD1 998244353
#define PI 3.141592653589793238462
#define int int64_t
#define vi vector<int>
#define vl vector<long long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vb vector<bool>
#define vc vector<char>
#define vpii vector<pair<int,int>>
#define vpivi vector<pair<int,vector<int>>>
#define pii pair<int,int>
#define si set<int>
#define msi multiset<int>
#define mii map<int,int>
#define mii map<long long ,long long>
#define mpiii map<pair<int,int>,int>
#define pqi priority_queue<int>
#define pqmi priority_queue<int, vector<int>, greater<int>>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define eb emplace_back
#define endl '\n'
#define ff first
#define ss second
using ll = long long;
#ifdef LOCAL
    #define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif
template<typename T> void _print(const T &x){ cerr << x; }
template<typename T1, typename T2> void _print(const pair<T1,T2> &p){ cerr<<"{"<<p.ff<<","<<p.ss<<"}"; }
template<typename T> void _print(const vector<T> &v){ cerr<<"["; for(auto &i:v){_print(i);cerr<<" ";} cerr<<"]"; }
template<typename T> void _print(const set<T> &v){ cerr<<"{"; for(auto &i:v){_print(i);cerr<<" ";} cerr<<"}"; }
template<typename T1, typename T2> void _print(const map<T1,T2> &v){ cerr<<"{"; for(auto &i:v){_print(i.ff);cerr<<":";_print(i.ss);cerr<<" ";} cerr<<"}"; }
template<typename T> void print(const vector<T> &v){ for(const auto &x : v) cout << x << ' '; cout << endl; }
void print(const string &s){ cout << s << endl; }
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
void run() {
     ll n; cin>>n;
    vl v(n); for(ll &it: v) cin>>it;
    int a,b,n;cin>>a>>b>>n;
    // screen length a,n tabs are there ,m number of remaining tabs

    int count = 0;
    int m = n;

    



}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    auto begin = chrono::high_resolution_clock::now();

    int t = 1;
    cin >> t;
    while (t--) run();

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}
