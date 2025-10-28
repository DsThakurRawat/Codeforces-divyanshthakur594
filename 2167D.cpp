    // simple template-test2
    // code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) cin >> v[i];
    /*
    int maxi = 1000000;
    vector<int> is_prime(maxi + 1, 1);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i*i <= maxi; i++){
        if (is_prime[i] == 1){
            for (int j = i*i; j <= maxi; j += i)
                    is_prime[j] = 0;
                }
             }
     vector<long long> primes;
    for (int i = 2; i <= maxi; i++) 
        if (is_prime[i] == 1) primes.push_back(i);

    long long ans = (long long)1e19;

    for (auto a : v){
       for (auto p : primes){
        if (a % p != 0) { 
            ans = min(ans, p);
                       break;
            }
        }
    }
    if (ans <= (long long)1e18) cout << ans << endl;
    else cout << -1 << endl;
    */







}

int main() {
 
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
