
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>nums(n);for(int i = 0; i< n; i++) cin >> nums[i];
    long long sum =0;
    for(int i = 0; i < n; i++) sum+=nums[i];
    if(sum % 2 != 0){ 
    cout << "YES"<<endl;
    return;
    };
    int count1 = 0,count2 = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] % 2 == 0) count1++;
        else count2++;

    }
    if(count1 >=1 && count2 >= 1 ){ 

    cout <<"YES"<<endl;
    return;

    }
    cout << "NO"<<endl;






   

  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
