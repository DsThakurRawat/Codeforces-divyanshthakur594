
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
     vector<long long> prime = {
        2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97
    };
    vector<long long >v(n);
    for(long long i = 0; i < n; i++) cin >> v[i];
     int n; cin >> n;
        long long ans = (long long)1e19;
        for(int i=0;i<n;i++){
            long long a; cin >> a;
            for(long long p: prime){
                if(a % p != 0){
                    ans = min(ans, p);
                    break;
                }
            }
        }
        if(ans <= (long long)1e18) cout << ans<< endl;
        else cout << -1 << endl;
        




  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
