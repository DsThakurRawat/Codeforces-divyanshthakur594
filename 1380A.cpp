
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> v(n + 1);  // size = n+1, indices = 0..n

for (int i = 1; i <= n; i++) {
    cin >> v[i];
}

   /*
   you're checking triplets i < j < k such that:
   v[i]<v[j]andv[j]>v[k]
   This means v[j] is a peak, and you want one smaller 
   element before and one smaller element after.
   This is basically checking whether an index j exists such that:
   there is some i < j with v[i] < v[j]
   there is some k > j with v[k] < v[j]



        O(n) Optimized Approach
        Step 1: Precompute prefix-min indices

        leftMin[j] = index of smallest element from 1…j

        Step 2: Precompute suffix-min indices

        rightMin[j] = index of smallest element from j…n

        if v[leftMin[j-1]] < v[j] and v[rightMin[j+1]] < v[j]
    => we found our i, j, k




   */

   vector<int>prefixmin(n+1),suffixmin(n+1);
   prefixmin[1]=1;
   for(int i = 2;i<=n;i++){
    if(v[i]< v[prefixmin[i-1]]) prefixmin[i] = i;
    else prefixmin[i] = prefixmin[i-1];
   }
   suffixmin[n]=n;
   for(int i = n-1;i>=1;i--){
    if(v[i]<v[suffixmin[i+1]])suffixmin[i]=i;
    else suffixmin[i]=suffixmin[i+1];
   }

   for(int i = 2;i<=n-1;i++){
    int j = prefixmin[i-1];
    int k = suffixmin[i+1];

    if(v[j]<v[i] && v[k]<v[i]){
        cout << "YES"<<endl;
        cout<<j<<" "<<i <<" "<<k<<endl;
        return;
    
    }
   }
   cout << "NO"<<endl;
   

    

   
     


    
    
  

    
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