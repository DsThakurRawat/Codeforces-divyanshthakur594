
#include <bits/stdc++.h>
using namespace std;
auto buildSieve = [&](int limit) {
            vector<bool> sieve(limit, true);
            sieve[0] = sieve[1] = false;
            vector<int> primes;

            for (int i = 2; i < limit; i++) {
                if (sieve[i]) {
                    primes.push_back(i);
                    if (1LL * i * i < limit) {
                        for (long long j = 1LL * i * i; j < limit; j += i)
                            sieve[j] = false;
                    }
                }
            }

            return make_pair(primes, sieve);
        };