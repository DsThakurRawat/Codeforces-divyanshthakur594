
// simple template-test2
// code by divyansh rawat

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,q;cin>>n>>k>>q;
    vector<long long>v(n+1,0);
    vector<long long>mini(n+1,0),mexi(n+1,0);

    while(q--){
        long long c,l,r;cin>>c>>l>>r;
        for(long long i = l;i<=r;i++){
            if(c==1){
                mini[i]=1;

            }
            else{
                mexi[i]=1;
            }
        }
    }
    for(long long i = 1;i<=n;i++){
        if(mini[i]==1 && mexi[i]==1){
            v[i] = k+1;
        }
        else if (mexi[i]==1) v[i] = i % k;
        else v[i]=k;
    }

    for(long long i =1;i<=n;i++){
        cout << v[i]<<" ";
      
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
