// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;

void solve() {

     int n,k; cin >> n >> k;
    vector<int>prime(n+1,1);
  
    
    for(long long i = 2; i <= n; i++){
        if(prime[i] == 1 ){
            for(int j = i*i; j <= n; j+=i){
            prime[j] = 0;
            }
        }
    }

    vector<int>primes;
    for(int i = 2; i <= n; i++)
            if(prime[i] == 1) primes.push_back(i);

    int count = 0;

    for(int i = 0; i + 1 < primes.size(); i++){
        int sum = primes[i] + primes[i+1] + 1;
        if(sum <= n && prime[sum]) count++;
    }
    if(count >= k) cout << "YES" << endl;
    else cout << "no\n";




    
       
}
    


  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}