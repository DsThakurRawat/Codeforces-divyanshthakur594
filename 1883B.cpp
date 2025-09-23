
// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , k; cin >> n >> k;
    string s; cin >> s;

    vector<int>frequency_count(26,0);

    for(int i = 0; i < n; i++)
        frequency_count[s[i] - 'a']++;

    int odd_frequency = 0;

    for(int i = 0; i < 26; i++){
        odd_frequency += frequency_count[i] % 2;
    }

    if(odd_frequency > k + 1) cout << "NO" << endl;
    else cout << "YES" << endl;

    









  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
