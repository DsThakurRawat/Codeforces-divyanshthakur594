
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long 
;
void solve() {

    string s;cin>>s;
    ll n = s.size();
    vector<array<int,3>>a(n);
    int bal = 0;
    for(int i =0;i<n;i++){
        a[i]={bal,-i,s[i]};
        bal+=(s[i]=='(' ? 1:-1);
    }
    sort(a.begin(),a.end());
    for(auto &x:a)cout << (char)x[2];
    cout << endl;

   
    

/*

        
a[i][0] = bal;   // prefix balance before position i
a[i][1] = -i;    // negative index (for sorting in descending order by i)
a[i][2] = s[i];  // character '(' or ')' stored as int (ASCII)


*/
  

  
   
    
}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   // int t ;
   // t=1;
    //cin >> t;
   // while (t--) {
        solve();
   // }
    return 0;
}
