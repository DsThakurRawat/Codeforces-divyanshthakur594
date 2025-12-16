
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using  ld = long double;
using  int128 = __int128_t;


//vector<vector<ll>> grid(n, vector<int>(m));
//vector<vector<ll>> arr(n, vector<int>(m,1));
//indexes to run from 1…n and 1…m, not from 0.
//vector<vector<ll>> grid(n + 1, vector<ll>(m + 1, 1));
  /*========grid input in cp=========
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cin >> grid[i][j];
                }
            }
*/


/*
====PRIME NUMBER CHECKING ALGORITHM================
 --------------------------------------------------
   6k ± 1 Optimization (CP Favorite)
  All primes > 3 are of form 6k ± 1
--------------------------------------------------

1 is neither a prime nor a composite number.
auto checkprime=[&](ll a){
                if (a <= 1) return false;
                if (a <= 3) return true;
                if (a % 2 == 0 || a % 3 == 0) return false;

                for (ll i = 5; i * i <= a; i += 6) {
                    if (a % i == 0 || a % (i + 2) == 0)
                        return false;
                }
                return true;

           };
      
           
NOTE-1 : 1, 4, 6, 8 and 9 are not prime numbers.

NOTE-2 :  If two digits are identical:
          22, 33, 55, 77
         All of these are divisible by 11, so they are not prime.
NOTE-3 :
        If the last digit is 2 or 5, and the number has more than one digit:

        Any number ending in 2 is even → not prime

        Any number ending in 5 (and larger than 5) → not prime



================Correct Sieve of Eratosthenes (proper way) ===============

                int N = 100;
                vector<bool> prime(N, true);

                prime[0] = prime[1] = false;

                for(int i = 2; i * i < N; i++){
                    if(prime[i]){                  // i is prime
                        for(int j = i * i; j < N; j += i){
                            prime[j] = false;      // mark multiples
                        }
                    }
                }


===============================================================================================
-----------------------------STRING AND STRING OPERATION---------------------------------------
===============================================================================================







===================checking if array-strings are isomorphic or not===========================
                








   // Checking how to check if string is isomorphic or not[for array string ]






        
            auto isIsomorphic = [&](const vector<int>& a, const string& s) -> bool {
                map<int, char> mp1;   // number -> character
                map<char, int> mp2;   // character -> number

                for (int i = 0; i < (int)a.size(); i++) {
                    // same number must map to same character
                    if (mp1.count(a[i]) && mp1[a[i]] != s[i])
                        return false;

                    // same character must map to same number
                    if (mp2.count(s[i]) && mp2[s[i]] != a[i])
                        return false;

                    mp1[a[i]] = s[i];
                    mp2[s[i]] = a[i];
                }
                return true;
            };

    ▶ Usage
      if (isIsomorphic(a, s))
      cout << "YES\n";
      else
    cout << "NO\n";

------------------------finding minimum length of s which contains string a as substring ans string b as subsequence----------------------
              {
                        string a, b;
                        cin >> a >> b;

                        int n = a.size();
                        int m = b.size();

                        int ans = INT_MAX;

                        // i = length of x (prefix taken from b)
                        for (int i = 0; i <= m; i++) {

                            int ptr = i;  // pointer in b (start of c)

                            // try to match b[ptr...] as subsequence of a
                            for (int j = 0; j < n && ptr < m; j++) {
                                if (a[j] == b[ptr]) {
                                    ptr++;
                                }
                            }

                            // ptr now points to start of y
                            int len_x = i;
                            int len_y = m - ptr;

                            ans = min(ans, len_x + n + len_y);

                          }
                      cout << ans << endl;








=================================================================================
::::::::::::::::::::::: BIT MANIPULATION BITMASK AND BITSET:::::::::::::::::::::::
=================================================================================
------------------LONGEST SUBARRAY HAVING BITWISE AND 0--------------------------
   class Solution {
        public:
            int longestNiceSubarray(vector<int>& nums) {
                int mask = 0, l = 0, ans = 0;

                for (int r = 0; r < nums.size(); r++) {
                    while (mask & nums[r]) {
                        mask ^= nums[l];
                        l++;
                    }
                    mask |= nums[r];
                    ans = max(ans, r - l + 1);
                }
                return ans;
            }
        };
-------------------------LC:201 BITWISE AND OF NUMBERS RANGE----------------------------------------------------------------------------
Given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.
NOTE: bitiwse and on any two numbers will always prodcue a number less than or equal to the smaller number
        							12 ---- 1100
									11 ---- 1011
									10 ---- 1010
									9  ---- 1001
									8  ---- 1000
									7  ---- 0111
									6  ---- 0110
									5  ---- 0101
    while(right > left){
            right = (right) & (right-1);


        }
        return right;


									


























==========================================================================================

||||||||||||||||||||||||||||||||||   Key CP fact ||||||||||||||||||||||||||||||||||

Longer binary length ⇒ potentially larger number   


Important CP Notes 
->Base of log does not matter in Big-O
->log₂ n = log₁₀ n = log n

->Binary search requires sorted data

->Used everywhere:
    lower_bound / upper_bound

    parametric search

    answer-space binary search


NOTE: Binary search runs in O(log n) time in the worst case because it halves the search space every step.















*/




#define nl '\n'


void solve() {
       int n;cin>>n;
       string s;cin>>s;
       set<string>st;
       ll k=2;
       string t = s;

       for(int i =0;i<n;i++){
         t = s;
         string p = "";
          if (i + 2 <= s.size()) {
            t.erase(i, 2);

           
          //  p =s.substr(0,i)+s.substr(i+k);
          }

            if(st.count(t)==false){
                st.insert(t);
            }

           



       }
       cout << st.size()-1<< nl;
  
        
        
          
         



           

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
