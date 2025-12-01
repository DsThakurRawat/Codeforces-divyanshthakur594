
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
 
    int n;cin>>n;
    vector<int>b(n);for(int &in:b)cin>>in;
    // if all values are distinct we can never find non intersecting subarrays whose sum is equal

   /*
   We claim the answer is NO if and only if the elements are pairwise distinct.
 If any element has two occurrences, we can trivially select them as the two subarrays. 
 Otherwise, since all elements are distinct, choosing a subarray is the same as choosing the set bits of a 109
 digit long binary number. Since every number has a unique binary representation, no two subarrays can have the same sum.
   */
  set<int>st;
  for(int &c : b)st.insert(c);
  if(st.size()==n){
    cout << "NO"<<endl;
  }
  else cout << "YES"<<endl;

    



     


    
    
  

    
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
