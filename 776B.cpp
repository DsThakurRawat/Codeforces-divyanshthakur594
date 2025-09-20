#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    // sieve up to n+1
    vector<int> prime(n + 2, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= n + 1; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n + 1; j += i)
                prime[j] = 0;
        }
    }

    // colors
    vector<int> colors(n);

    for (int i = 2; i <= n + 1; i++) {
        if (prime[i]) colors[i - 2] = 1;   // primes → color 1
        else           colors[i - 2] = (n == 1 ? 1 : 2); // composites → color 2
    }

    int k = (n == 1 ? 1 : 2);
    cout << k << "\n";
    for (int i = 0; i < n; i++) 
        cout << colors[i] << " ";
    cout << "\n";

    return 0;
}
