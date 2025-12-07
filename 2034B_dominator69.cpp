#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    int n, m, k; cin >> n >> m >> k;
    string s; cin >> s;
    int ans = 0;
    
    int curr = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '0'){
            curr++;
            if (curr == m){
                for (int j = i; j < min(i + k, n); j++){
                    s[j] = '1';
                }
                curr = 0;
                ans++;
            }
        } else {
            curr = 0;
        }
    }
    
    cout << ans << "\n";
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}