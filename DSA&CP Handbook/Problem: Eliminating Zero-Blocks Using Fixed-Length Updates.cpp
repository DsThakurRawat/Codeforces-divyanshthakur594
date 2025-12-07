/*










Problem: Eliminating Zero-Blocks Using Fixed-Length Updates
You are given:

an integer n — length of the binary string,

integers m and k,

a binary string s of length n.

You are allowed to perform the following operation any number of times:

Operation:
Choose an index i and set
s[i], s[i+1], ..., s[min(i+k-1, n-1)]
to '1'.

Your goal is to determine the minimum number of operations needed such that:

There is no substring of length m consisting entirely of '0's.













⭐ Approach Used (General Explanation)
Scan the string from left to right.

Keep a counter cur for consecutive zeros.

Every time you encounter m consecutive zeros:

Apply an operation at the last zero of this block.

Convert the next k characters to '1'.

Reset cur to zero.

Increment the operation count.

Continue until the end of the string.

This greedy approach works because:

An operation is applied exactly when needed (just after detecting an invalid block).

Converting the next k characters to '1' ensures no overlapping occurrences.

It always produces the minimum number of operations.






*/

// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
ll n,m,k;cin>>n>>m>>k;
string s;cin>>s;
ll ans = 0;
ll cur = 0;
for(ll i = 0;i<n;i++){
    if(s[i]=='0'){
        cur++;
        if(cur==m){
            for(int j = i;j<min(i+k,n);j++){
                s[j]='1';
            }
              cur = 0;
             ans++;

        }
      
    }
    else{
        cur= 0;
    }
}
cout << ans<<endl;

   

    
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