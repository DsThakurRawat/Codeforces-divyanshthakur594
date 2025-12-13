
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using  ld = long double;
using  int128 = __int128_t;


//vector<vector<ll>> grid(n, vector<int>(m));
//vector<vector<ll>> arr(n, vector<int>(m,1));
//indexes to run from 1…n and 1…m, not from 0.
//vector<vector<ll>> grid(n + 1, vector<ll>(m + 1, 1));


/*
auto checkprime=[&](ll a){
                if (a <= 1) return false;
                if (a <= 3) return true;
                if (a % 2 == 0 || a % 3 == 0) return false;

                for (ll i = 5; i * i <= a; i += 6) {
                    if (a % i == 0 || a % (i + 2) == 0)
                        return false;
                }
                return true;

           };
*/


#define nl '\n'


void solve() {
           ll k;cin>>k;
           ll n;cin>>n;
           string num = to_string(n);

           auto checkprime=[&](ll a){
                if (n <= 1) return false;
                if (n <= 3) return true;
                if (n % 2 == 0 || n % 3 == 0) return false;

                for (ll i = 5; i * i <= n; i += 6) {
                    if (n % i == 0 || n % (i + 2) == 0)
                        return false;
                }
                return true;

           };
           string t= "";

           for(ll i=0;i<num.size();i++){
                t = t+num[i];
                ll number = stoll(t);
                if(checkprime(number)==false){
                    cout << t.size()<<nl;
                    cout << t << nl;
                    break;
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
