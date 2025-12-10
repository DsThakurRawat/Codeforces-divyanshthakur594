
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MAXV = 50000;
ll last_seen[MAXV + 1000];
void solve(){
    ll m;cin>>m;
    vector<vector<int>> days(m);
    for(ll day = 0;day<m;day++){
        int n;cin>>n;
        days[day].resize(n);
        for(int j = 0;j<n;j++){
            int x ;cin>>x;
            days[day][j]=x;
            last_seen[x]=day;
        }
    }
    vector<int>result(m,-1);
    bool bad = false;

    for(ll day =0;day<m;day++){
        for(ll x :days[day]){
            if(last_seen[x]==day){
                result[day]=x;

            }
        }

        if(result[day]==-1){
            cout << -1 << '\n';
            bad = true;
            break;
        }
    }
    if(!bad){
        for(ll i=0;i<m;i++){
            cout << result[i]<<(i+1<m? ' ':'\n');
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
