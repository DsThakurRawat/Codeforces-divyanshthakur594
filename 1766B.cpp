
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

    for(int i =0;i<n-2;i=i+2){
        string p = s.substr(i,2);
        if(st.count(p)){
            cout << "YES"<<endl;
            return;
        }
        st.insert(p);
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
