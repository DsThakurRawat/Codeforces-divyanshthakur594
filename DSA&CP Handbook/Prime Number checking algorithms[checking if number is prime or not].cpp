/****************************************************
 *  PRIME NUMBER CHECKING – ALL METHODS (BASIC → ADV)
 *  Author: Divyansh Rawat (CP Ready)
 *
 *  This file contains:
 *   1. Brute Force Method
 *   2. √n Optimization
 *   3. Skip Even Numbers
 *   4. 6k ± 1 Optimization
 *   5. Sieve of Eratosthenes (Multiple Queries)
 *   6. Fermat Primality Test (Probabilistic)
 *   7. Miller–Rabin (Deterministic for 64-bit)
 *
 *  Usage:
 *   - For single number ≤ 1e12 → 6k ± 1
 *   - For many queries ≤ 1e7 → Sieve
 *   - For very large numbers ≤ 1e18 → Miller–Rabin
 ****************************************************/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using u128 = __uint128_t;

/*--------------------------------------------------
  1️⃣ Brute Force Method
  Check divisibility from 2 to n-1
--------------------------------------------------*/
bool isPrime_BruteForce(ll n) {
    if (n <= 1) return false;

    for (ll i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

/*--------------------------------------------------
  2️⃣ √n Optimization
  Check divisors only till sqrt(n)
--------------------------------------------------*/
bool isPrime_Sqrt(ll n) {
    if (n <= 1) return false;

    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

/*--------------------------------------------------
  3️⃣ Skip Even Numbers
  Only odd divisors after checking 2
--------------------------------------------------*/
bool isPrime_SkipEven(ll n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

/*--------------------------------------------------
  4️⃣ 6k ± 1 Optimization (CP Favorite)
  All primes > 3 are of form 6k ± 1
--------------------------------------------------*/
bool isPrime_6k(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

/*--------------------------------------------------
  5️⃣ Sieve of Eratosthenes
  Precompute primes up to MAXN
--------------------------------------------------*/
const int MAXN = 1000000;
vector<bool> isPrimeSieve(MAXN + 1, true);

void buildSieve() {
    isPrimeSieve[0] = isPrimeSieve[1] = false;

    for (int i = 2; i * i <= MAXN; i++) {
        if (isPrimeSieve[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                isPrimeSieve[j] = false;
            }
        }
    }
}

/*--------------------------------------------------
  6️⃣ Fermat Primality Test (Probabilistic)
  Based on Fermat's Little Theorem
--------------------------------------------------*/
ll modPower(ll a, ll d, ll mod) {
    ll res = 1;
    while (d) {
        if (d & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        d >>= 1;
    }
    return res;
}

bool isPrime_Fermat(ll n, int iterations = 5) {
    if (n <= 4)
        return (n == 2 || n == 3);

    for (int i = 0; i < iterations; i++) {
        ll a = 2 + rand() % (n - 3);
        if (modPower(a, n - 1, n) != 1)
            return false;
    }
    return true; // Probably prime
}

/*--------------------------------------------------
  7️⃣ Miller–Rabin (Deterministic for 64-bit)
--------------------------------------------------*/
ll modMul(ll a, ll b, ll mod) {
    return (u128)a * b % mod;
}

ll modPow(ll a, ll d, ll mod) {
    ll res = 1;
    while (d) {
        if (d & 1) res = modMul(res, a, mod);
        a = modMul(a, a, mod);
        d >>= 1;
    }
    return res;
}

bool millerTest(ll a, ll s, ll d, ll n) {
    ll x = modPow(a, d, n);
    if (x == 1 || x == n - 1)
        return true;

    for (ll i = 1; i < s; i++) {
        x = modMul(x, x, n);
        if (x == n - 1)
            return true;
    }
    return false;
}

bool isPrime_MillerRabin(ll n) {
    if (n < 2) return false;

    // Small primes check
    for (ll p : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29}) {
        if (n == p) return true;
        if (n % p == 0 && n != p) return false;
    }

    ll d = n - 1, s = 0;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    // Deterministic bases for 64-bit
    for (ll a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {
        if (a % n == 0) continue;
        if (!millerTest(a, s, d, n))
            return false;
    }
    return true;
}

/*--------------------------------------------------
  8️⃣ AKS Primality Test (Theory Only)
  Deterministic polynomial-time algorithm.
  Not practical for competitive programming.
--------------------------------------------------*/

/*--------------------------------------------------
  MAIN FUNCTION (Sample Usage)
--------------------------------------------------*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    buildSieve(); // Only needed if using sieve

    ll n;
    cin >> n;

    cout << "Brute Force        : " << isPrime_BruteForce(n) << '\n';
    cout << "Sqrt Method        : " << isPrime_Sqrt(n) << '\n';
    cout << "Skip Even          : " << isPrime_SkipEven(n) << '\n';
    cout << "6k ± 1 Method      : " << isPrime_6k(n) << '\n';

    if (n <= MAXN)
        cout << "Sieve              : " << isPrimeSieve[n] << '\n';

    cout << "Fermat Test        : " << isPrime_Fermat(n) << '\n';
    cout << "Miller-Rabin       : " << isPrime_MillerRabin(n) << '\n';

    return 0;
}
