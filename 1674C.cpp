
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using  ld = long double;
using  int128 = __int128_t;


//vector<vector<ll>> grid(n, vector<int>(m));
//vector<vector<ll>> arr(n, vector<int>(m,1));
//indexes to run from 1…n and 1…m, not from 0.
//vector<vector<ll>> grid(n + 1, vector<ll>(m + 1, 1));





#define nl '\n'


void solve() {
    string s;cin>>s;
    string t;cin>>t;
    int flag =0;
    set<char>st1(s.begin(),s.end());
    set<char>st2(t.begin(),t.end());
   
    for(int i=0;i<s.size();i++){

        for(int j =0;j<t.size();j++){
            if(s[i]==t[j])flag=1;
        }

    }
    if(flag ==0){
    cout << (1<<s.size()) <<nl;
    return;
    }
    if(st1.size()==st2.size()){
        cout << 1 << nl;
        return;
    }
    if(flag==1){
        cout << -1 << nl;
        return;
    }
    
   
   

}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
