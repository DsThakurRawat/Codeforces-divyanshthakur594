
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
        string s,t;cin>>s>>t;

        auto count_AZ = [&](const string &x){
            vector<int>freq(26,0);
            for (char c : x){
                 freq[c-'A']++;
            }
            return freq;
        };

        vector<int>fs = count_AZ(s);
        vector<int>ft= count_AZ(t);

        for(int i = 0;i<26;i++){
            if(fs[i]-ft[i]<0){
                cout << "NO"<<endl;
                return;
            }
        }




     

        
    
     

      
      
      
      
  
   
    
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
