
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   int a, b;
    cin >> a >> b;
    
    if (a < b) {
        cout << "-1" << endl;
        return;
    }
    
    bitset<32> bits_of_a(a);
    bitset<32> bits_of_b(b);
    vector<int> ops;
    
    if (a == b) {
        cout << "0" << endl;
        return;
    }
    
    if (a != 0) {
        ops.push_back(a);
        bits_of_a ^= bitset<32>(a);
    }
    
    if (b != 0) {
        ops.push_back(b);
        bits_of_b ^= bitset<32>(b);
    }
    int m =  ops.size();
    cout << m << endl;
    for (int x : ops) {
        cout << x << " ";
    }
    cout << endl;


  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
