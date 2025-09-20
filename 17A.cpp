
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

     int n,k; cin >> n >> k;
    vector<int>prime(n+1,1);
  
    
    for(long long i = 2; i <= n; i++){
        if(prime[i] == 1 && i*i <= n){
            for(int j = i*i; j <= n; j+=i){
            prime[j] = 0;
            }
        }
    }


  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}