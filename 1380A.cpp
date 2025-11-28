
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>v(n+1);for(auto &in:v)cin>>in;
    vector<int>ans;
    int flag = 0;

   
    for(int i =1;i<n;i++){
        for(int j = i+1;j<n;j++){
            
            for(int k = j+1;k<n;k++){
                if(v[i]<v[j]&&v[j]>v[k]){
                    flag = 1;
                    ans.push_back(i);
                    ans.push_back(j);
                    ans.push_back(k);
                    cout << "YES"<<endl;
                   cout << ans[0]<< " "<<ans[1]<<" "<<ans[2]<<endl;
                
                    return;
                } 
            }
            if(flag==1)break;
        }
         if(flag==1)break;


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