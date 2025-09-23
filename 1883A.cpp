
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;




void solve() {
    



     string pin;
        cin >> pin;
        int time = 0;
        int prev = 1;
        for (char c : pin) {
            int d = c - '0';
            time += abs(prev - d) + 1; 
            prev = d;
        }
        cout << time << "endl";





  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
