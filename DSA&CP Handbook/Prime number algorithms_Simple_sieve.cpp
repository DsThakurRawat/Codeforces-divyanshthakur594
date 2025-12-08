// sieve_simple.cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> sieve_simple(int n){
    if(n < 2) return {};
    vector<char> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    int r = (int)floor(sqrt((long double)n));
    for(int p = 2; p <= r; ++p){
        if(is_prime[p]){
            long long start = 1LL * p * p;
            for(long long j = start; j <= n; j += p)
                is_prime[(int)j] = false;
        }
    }
    vector<int> primes;
    for(int i = 2; i <= n; ++i) if(is_prime[i]) primes.push_back(i);
    return primes;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin >> n)) return 0;
    auto primes = sieve_simple(n);
    cout << primes.size() << "\n";
}
