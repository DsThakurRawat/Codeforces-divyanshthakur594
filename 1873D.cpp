
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'B') {
			res++; i += k - 1;
		}
	}
	cout << res << endl;

  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
