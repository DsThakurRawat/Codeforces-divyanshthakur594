/*
DIVYANSH RAWAT
MASTER TEMPLATE
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
void solve() {
    return;
}

void MASTER() {
   ll n,x;cin>>n>>x;
   vector<ll>a(n);for(auto & x : a) cin>>x;

   ll sum = accumulate(all(a),0);
   if(sum % x != 0){
    cout << n << nl;
    return;
   }




}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        MASTER();
        solve();
    }

    return 0;
}
