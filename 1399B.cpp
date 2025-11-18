
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;cin>>n;
    vector<long long >a(n);for(long long  i=0; i<n; i++)cin>>a[i];
    vector<long long >b(n);for(long long  i=0; i<n; i++)cin>>b[i];
    long long min_a = *min_element(a.begin(),a.end());
    long long min_b = *min_element(b.begin(),b.end());

    long long maxi_count = 0;

    for(int i = 0; i < n; i++){
        maxi_count += max(a[i]-min_a,b[i]-min_b);
    }
    cout << maxi_count<<endl;

   








  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
