// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long r;
        cin >> r;
        
        long long d = 11;
        vector <long long> ans;
        while (r >= d) {
            if (r % d == 0)
                ans.push_back(r / d);
            d = (d - 1) * 10 + 1;
        }
        
        cout << (int)ans.size() << '\n';
        for (int i = (int)ans.size() - 1; i >= 0; --i)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    
    return 0;
}
