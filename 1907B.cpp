
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
    string ans ="";


    for(ll i =0;i<s.size();i++){

        if(s[i]=='b'||s[i]=='B'){
            if(s[i]=='b'){
                for(int j =i-1;j>=1;j--){
                    if(islower(s[j])){
                        break;
                    }
                }
            }
            if(s[i]=='B'){
                for(int j =i-1;j>=1;j--){
                    if(isupper(s[j])){
                       break;
                    }
                }
            }

        }
         else{
                ans = ans+s[i];
               
            }

    }
    cout << ans << endl;







    
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
