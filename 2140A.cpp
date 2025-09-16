
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s; cin >> s;

    // the minimum number of operation is misplaced one where there should be zero
    // it can be also think as number of number of ones before 1st zero;
    // toatl moves required -> total mispalced one which can be replaced with sufficient zeroes present in string
    string s1 = s;
    int count = 0;

    sort(s1.begin(),s1.end());
    for(int i = 0; i < n; i++) if(s1[i] != s1[i]) count++;

    cout << count / 2 << endl;












    


  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
