
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  
    int n;cin>>n;
    vector<int>a(n);for(int &in : a)cin>>in;
    int maxi = a[0];

    for(int i = 0;i<n;i++){
        maxi = max(maxi,a[i]);
        if( i % 2 == 0){
            a[i] =  maxi;
        }
    }
   
    
    long long cost = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){   // make even index a peak
            long long left = (i-1 >= 0 ? a[i-1] : LLONG_MIN);
            long long right = (i+1 < n ? a[i+1] : LLONG_MIN);

            long long need = max(left, right) - a[i] + 1;

            if(need > 0) cost += need;
        }
    }

    cout << cost << endl;


   
   
        
          
          
          

        
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
