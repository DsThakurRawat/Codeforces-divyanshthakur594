
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
///vector<pair<int,int>> v;






#define nl '\n'


void solve() {
    string s;
        cin>>s;
        int ans = 0;
        if(s[0]!='0') ans+=s[0]-'1';
        else ans += 9;
 
        for(int i=1;i<4;i++){
            if(s[i]!='0' && s[i-1]!='0') ans+=abs(s[i]-s[i-1]);
            else if(s[i]=='0' && s[i-1]=='0') ans=ans;
            else ans += 10-abs(s[i] - s[i-1]);
 
        }
 
        cout<<ans+4<<endl;




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
