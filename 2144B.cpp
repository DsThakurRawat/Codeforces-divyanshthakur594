
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

  /*
 Recall that a permutation of length n
 is a sequence of length n
 such that each integer from 1
 to n
 appears in it exactly once.
 Let's define the cost of a permutation as the minimum 
 length of its contiguous subsegment (possibly empty) 
 that needs to be sorted so that the entire permutation
  becomes sorted in ascending order.*/
 int n;
    cin >> n;
    vector<int> p(n);
    for (int &x : p) cin >> x;

    vector<int> sorted(n);
    for(int i = 0; i < n; i++)
        sorted[i] = i + 1;

    int l = 0, r = n - 1;

    while (l < n && p[l] == sorted[l]) l++;
    while (r >= 0 && p[r] == sorted[r]) r--;

    if (l >= r) {
        cout << 0 << endl;
        return;
    }

    cout << r - l + 1 << endl;
  


















    
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
