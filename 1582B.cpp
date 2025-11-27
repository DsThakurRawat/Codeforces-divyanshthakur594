
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
 int n;cin>>n;                                        // a number is divisble by 25 if last two digits are one of 00,25,50,75
 vector<int>v(n);for(auto & in : v)cin>>in;
 long long sum = accumulate(v.begin(),v.end(),0);
 long res = sum-1;

 vector<vector<int>>subs;
 subs.push_back({});
 int count = 0;

   for(int i = 0;i<n;i++){
    int sz = subs.size();
   
    for(int  j = 0;j<sz;j++){
       vector<int>p = subs[j];
       p.push_back(v[i]);
       int summ = accumulate(p.begin(),p.end(),0);
       if(summ = res)count++;
       subs.push_back(p);

    
    }

   }
   cout << count << endl;



    



   




   

  

    
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
