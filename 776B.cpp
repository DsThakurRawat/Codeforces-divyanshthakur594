
// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;

void solve() {
    //i-th jwellary price equals to i+1
    // Step 1: Sieve up to n+1
    int n; cin >> n;


    vector<int> prime(n + 2, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= n + 1; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n + 1; j += i)
                prime[j] = 0;
        }
    }

    // Step 2: Assign colors
    vector<int> colors(n);
    int color_id = 1;
    for (int i = 2; i <= n + 1; i++) {
        if (prime[i]) { // i is prime
            for (int j = i; j <= n + 1; j += i) {
                if (colors[j - 2] == 0)
                    colors[j - 2] = color_id;
            }
            color_id++;
        }
    }

    // Step 3: Output result
    cout << color_id - 1 << "\n";
    for (int i = 0; i < n; i++) 
        cout << colors[i] << " ";
    cout << "\n";

    
    


    
  







  
}

int main() {
    //int t ;
    //cin >> t;
   // while (t--) {
        solve();
  //  }
    return 0;
}
