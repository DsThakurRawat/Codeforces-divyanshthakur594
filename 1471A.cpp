
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,x;cin>>n>>x;
    vector<long long >v(n);for(auto &in:v)cin>>in;
    //sum += (b[i] + x - 1) / x; 
    long long  maxi = 0;

    for(int i =0;i<n;i++){
        maxi = maxi + (v[i] + x -1)/(x);
        
    }
    long long mini = 0;
    long long mini_sum = 0;

    for(int i = 0;i<n;i++){
        mini_sum +=v[i];
    }
    mini =  (mini_sum + x - 1)/(x);

    cout << mini << " "<< maxi <<endl;
    





     


    
    
  

    
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
