
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

    for(int i = 0; i < m; i++){

        if(find(nums.begin(),nums.end(),nums[i]) != nums.end()){
            cout << nums[i]+1 << endl;
            return;
        }



       
          
    }

    

    




    










    




  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
