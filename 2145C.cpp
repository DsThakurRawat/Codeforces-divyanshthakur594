
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   
    int n; cin >> n;
    string s; cin >> s;
    int curr = count(s.begin(),s.end(),'a') - count(s.begin(), s.end(),'b');

    map<int,int>mpp;

    int pr = 0;
    mpp[pr] = -1;
    int ans = n;

    for(int i = 0; i < n; i++){
        if(s[i] == 'a') pr += 1;
        else pr += -1;

        if(mpp.count(pr-curr)) ans = min(ans,i - mpp[pr - curr]);
    }

    cout << (ans == n ? -1 : ans) << endl;
    
   


    








  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
