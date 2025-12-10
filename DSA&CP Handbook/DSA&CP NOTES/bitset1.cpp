
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
   int count = 0;
        string b = bitset<32>(n).to_string();//This converts the integer n into a 32-bit binary string.
        b.erase(0, b.find_first_not_of('0'));//This removes leading zeros
        /*
        b.find_first_not_of('0') gives index of the first '1'.
        erase(0, index) deletes all characters from start up to that index.
        
        */

        string s = b;
        reverse(s.begin(),s.end());

        for(int i = 0;i<b.size();i++){
            if(b[i]!=s[i])count++;
        }

      cout << count<<endl;

        

        

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
