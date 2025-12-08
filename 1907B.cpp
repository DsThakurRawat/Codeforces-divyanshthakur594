
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long 
;
void solve() {

    string s;cin>>s;

    // if when s[i]=='b' ->  : it deletes the last (rightmost) lowercase letter in the typed string
    // when he presses the 'B' key, it deletes the last (rightmost) uppercase letter in the typed string. If there are no uppercase letters in the typed string,
   ll delupper = 0;
   ll dellower = 0;
   string ans ="";

   for(ll i=(ll)s.size()-1;i>=0;i--){
    if(s[i]=='b'){
        dellower++;
        continue;
    }

    if(s[i]=='B'){
        delupper++;
        continue;
    }

    if(delupper>0&&s[i]>='A'&&s[i]<='Z'){
        delupper--;
        continue;
    }
    if(dellower>0&& s[i]>='a'&&s[i]<='z'){
        dellower--;
        continue;
    }
    ans +=s[i];


   }

     reverse(ans.begin(),ans.end());
     cout << ans <<endl;


    







    
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
