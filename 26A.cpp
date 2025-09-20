
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>prime(n+1,1);
    // designing sieve
    
    for(long long i = 2; i <= n; i++){
        if(prime[i] == 1 && i*i <= n){
            for(int j = i*i; j <= n; j+=i){
            prime[j] = 0;
            }
        }
    }
    int cnt = 0;
    //A number is called almost prime if it has exactly two distinct prime divisors.
    for(int i = 1; i <= n; i++){
        if( n % i == 0 && prime[i] == 1)cnt++;
    }

    cout << cnt << endl;

    





  
}

int main() {
   // int t ;
   // cin >> t;
   // while (t--) {
        solve();
   // }
    return 0;
}
