
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){

    string a;cin>>a;
    string b;cin>>b;
    int n = a.size();
    int m = b.size();
    if(a[0]==b[0]){
        cout <<"YES"<<endl;
        
        cout << string(1,a[0])+"*"<<endl;
        return;
        
    }
    if(a[n-1]==b[m-1]){
        cout << "YES"<<endl;
        cout << "*"+string(1,b[m-1])<<endl;
        return;

    }
    string s1 = a.size() <= b.size() ? a : b;
    string s2 = a.size()>b.size()?a:b;
    n = s1.size();
    string best = "";
    for(int i =0;i<n;i++){
        for(int j = i;j<n;j++){
            string sub = s1.substr(i,j-i+1);
            if(s2.find(sub)!=string::npos){
                if(sub.size()>best.size()){
                    best = sub;

                }
            }
        }
    }
    if(best.size()>=2){
        cout << "YES"<<endl;
        cout<< '*'+best+'*'<<endl;
    }
    else{
        cout << "NO"<<endl;
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
