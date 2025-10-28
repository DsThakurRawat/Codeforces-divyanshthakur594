
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;


vector<long long> sieve_primes(int limit = 1000000) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i)
                is_prime[j] = false;
        }
    }

    vector<long long> primes;
    for (int i = 2; i <= limit; i++)
        if (is_prime[i]) primes.push_back(i);

    return primes;
}


void solve(const vector<long long> &primes) {
    long long n;
    cin >> n;

    vector<long long> v(n);
    for (long long i = 0; i < n; i++) cin >> v[i];

    long long ans = (long long)1e19;

    for (auto a : v) {
        for (auto p : primes) {
            if (a % p != 0) { 
                ans = min(ans, p);
                break;
            }
        }
    }

    if (ans <= (long long)1e18) cout << ans << "\n";
    else cout << -1 << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // precompute primes once
    vector<long long> primes = sieve_primes();

    int t;
    cin >> t;
    while (t--) solve(primes);

    return 0;
}
