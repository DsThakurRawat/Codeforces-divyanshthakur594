
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;   cin >> n;
  
    vector<int>v(n);


    for(int i = 0; i < n; i++) cin >> v[i];

    set<int>st(v.begin(),v.end());
    vector<int>nums(st.begin(),st.end());
    int m = nums.size();
    int i = 0;

    while (st.count(i)) i++;
    return i;




    

    




    










    




  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
