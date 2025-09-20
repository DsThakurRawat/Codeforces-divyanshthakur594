
// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;

void solve() {
    //i-th jwellary price equals to i+1
    // Step 1: Sieve up to n+1
   int n; 
    cin >> n;
    vector<int> prime(n + 2, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= n + 1; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n + 1; j += i)
                prime[j] = 0;
        }
    }
    vector<int> colors(n);
    for (int i = 2; i <= n + 1; i++) {
        if (prime[i]) colors[i - 2] = 1;  
        else           colors[i - 2] = (n == 1 ? 1 : 2);
    }
    int k = (n == 1 ? 1 : 2);
    cout << k << endl;;
    for (int i = 0; i < n; i++) 
        cout << colors[i] << " ";
    cout << endl;;
    


    
  







  
}

int main() {
    //int t ;
    //cin >> t;
   // while (t--) {
        solve();
  //  }
    return 0;
}
