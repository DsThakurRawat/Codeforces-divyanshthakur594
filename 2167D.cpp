    // simple template-test2
    // code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;


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


    int min_x(vector<int>& a){
    int n = a.size();
    int g = a[0];
    for (int i = 1; i < n; i++) g = gcd(g, a[i]);

    map<int, int> freq;
    for (int x : a){
        x /= g;
        int tmp = x;
        for (int p = 2; p * p <= tmp; p++){
            if (x % p == 0){
                freq[p]++;
                while (x % p == 0) x /= p;
            }
        }
        if (x > 1) freq[x]++;
    }

    int best = 0;
    for (auto &[p, c] : freq) best = max(best, c);
    return best ? n - best : 0;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << min_x(a) << '\n';
}









int main() {
 
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
