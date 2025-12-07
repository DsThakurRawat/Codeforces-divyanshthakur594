
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
    string s = "";

    for(int i = 0;i<a.size();i++){
        vector<int>arr;
        for(int j =i;j<a.size();j++){
            arr.push_back(a[j]);
        }
        sort(q.begin(), q.end());
        sort(arr.begin(), arr.end());
        if(q==arr){
            s +='1';
        }
        else{
            s+='0';
        }

        
    }
    cout << s << endl;


  

    
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
