
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long  n;cin>>n;
  vector<long long >ans(n);
/**
 Remember the sum of the first n
 positive integers?

 Every positive integer is divisible by 1

 Consider the array a=[1,2,…,n]
 that satisfies the second condition. It has the sum of 1+2+⋯+n=n(n+1)2
.

One solution is to notice that if we double every element (a=[2,4,6,…,2n])
, the sum becomes n(n+1)2×2=n(n+1)
, which is divisible by n
.

Another solution is to increase the value of a1
 until the sum becomes divisible by n
. This works because every integer is divisible by 1
, and we only need to increase a1
 by at most n
.
\
Time complexity: O(n)

 */  

 for(int i = 1; i<=n; i++){
  cout << i<<" ";
 }
 cout <<endl;


   






 







 










}
  


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(NULL);
 
    
    int t ;
    t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
