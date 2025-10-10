
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    //ou are not allowed to eat the apple as its beauty (b1=1
//) is not greater than the beauty of the last apple you ate (b5=2
//).

        int n;
        cin >> n;

        vector<int>nums(n);
        for(int i = 0; i < n; i++) cin >> nums[i];
        int count = 0;

        
        set<int>sett(nums.begin(),nums.end());

        cout << sett.size()<< endl;



       



      






  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
