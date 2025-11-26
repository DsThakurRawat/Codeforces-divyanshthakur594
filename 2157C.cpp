
// simple template-test2
// code by divyansh rawat

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,q;cin>>n>>k>>q;
    vector<long long >ans(n,k+5);
    vector<array<int,3>>type2;
    vector<array<int,3>>type1;


    while(q--){

        int c,l,r;cin>>c>>l>>r;
        l--;r--;
        if(c==1){
            type1.push_back({c,l,r});
        }
        else{
            type2.push_back({c,l,r});
            }

        }

        for(auto &t :type1){
            int l = t[1];
            ans[l] = k;
        }

        for(auto &t: type2){
            int l = t[1];
            int r = t[2];

            for(int x =0;x<k;x++){
                if(l+x<=r)ans[l+x]=x;
            }
            for(int i =l;i<=r;i++){
                if(ans[i]==k)ans[i]==k+5;
            }


        }
        for(auto &ot:ans){
            cout << ot <<" ";
        }
        cout << endl;

        

        










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
