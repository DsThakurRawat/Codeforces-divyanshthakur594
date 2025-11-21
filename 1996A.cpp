
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int total_cows = n/4;
    int rem_legs = n % 4;
    int hen = rem_legs/2;
    int min_animals = total_cows+hen;
    cout << min_animals<<endl;



  

}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
