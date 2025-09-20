
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
    
    //A number is called almost prime if it has exactly two distinct prime divisors. and we have to find almost prime number
    vector<int>primefactorcount(n+1,0);
    for(int i = 2; i <= n; i++){
        if(prime[i] == 1){
            for(int j = i; j <= n; j+=i){
                primefactorcount[j]++;

        }
        }
    }

    int almostprimes = 0;
    for(int i = 2; i <= n; i++){
        if(primefactorcount[i] == 2)almostprimes++;
    }
    cout << almostprimes << endl;





  
}

int main() {
   // int t ;
   // cin >> t;
   // while (t--) {
        solve();
   // }
    return 0;
}
