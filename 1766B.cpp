
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){

    int n;cin>>n;
    string s;cin>>s;
    // let say x is subtring of s and x is repeating in s if length of x >=2 then possiblity ->yes else no
    set<string>st;
    bool ok = false;

    for(int i =0;i<n-1;i++){
        string p = s.substr(i,2);
        if(st.count(p)==1){
            ok=true;
            
        }
      

        if(i>=1){// this is to make sure string don't overalp
            st.insert(s.substr(i-1,2));
        }


    }
    cout<<(ok?"YES":"NO")<<endl;

  

    
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
