
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll =  long long;


void solve() {
    ll n;cin>>n;
    vector<ll>a(n);for(ll &in:a)cin>>in;
    vector<int>evenarr,oddarr;
    int odd_count = 0;
    ll sum = 0;
    for(ll &in:a){
        if(in%2==0) evenarr.push_back(in);
        else{
          
          oddarr.push_back(in);
          
        }
    }
    sort(oddarr.begin(),oddarr.end());
    if(oddarr.size()==0){
        cout <<0 <<endl;
        return;
    }
   ll  evensum = accumulate(evenarr.begin(),evenarr.end(),0);

 
   int sizee = oddarr.size();
   ll oddsum = 0;

   if(sizee%2==0){
    for(int i = sizee/2; i<sizee;i++){
        oddsum += oddarr[i];

    }
   }

   else{
    for(int i =sizee/2;i<sizee;i++){
        oddsum+=oddarr[i];
    }
   }

    if(oddarr.size()>=1){
        if(oddarr.size()==1){
          cout << oddarr[0]+evensum<<endl;
          return;
        }
        else{
            cout << oddsum+evensum<<endl;
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
