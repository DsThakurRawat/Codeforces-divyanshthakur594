
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

//f he can choose k distinct integers between 1and n such that their sum is equal to x.

long long  n,k,x;
cin >> n >> k >> x;
long long  sum = x;
int total_eletochoose = k;
// for nums first;
// the simple appraoch for this problem is find min solution and maximumum solution 
// calculate the minimum possible sum of k distinct integers 
// sum of first k natural numbers

long long min_sum = (k*(k+1))/2;
long long max_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

if (x >= min_sum && x <= max_sum)
			cout << "YES" << endl; 
		else
			cout << "NO" << endl; 




  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
