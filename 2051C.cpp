
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n,m,k;cin>>n>>m>>k;
    vector<int>a(m);for(int &in:a)cin>>in;
    vector<int>q(k);for(int &in:q)cin>>in;
    // o/p 1 if passes the exam o/p 0 if he failed
   
    if(n==k){
        string s(m,'1');
        cout << s << endl;
        return;
    }
    if(k<n-1){
        string s(m,'0');
        cout<<s<<endl;
        return;
    }
    vector<int>known(n+1,false);
    for(int &x:q){
        
        known[x]=true;
    }
 // if k = n-1 -> exactly 1 missing qsn
 int missed = -1;
 for(int i = 1;i<=n;i++)
{
    if(!known[i]){
        missed = i;
        break;
    }
}
for(int i =0;i<m;i++){
    if(a[i]==missed)cout << '1';
    else cout << '0';
}
cout << endl;

 

  

    
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
