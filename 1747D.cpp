
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


-------------------------------------------------REMOVING ADJACENT K CHARACTER FROM STRING----------------------------------------------------------
General formula (MEMORIZE)

1.For removing k characters starting at i:

remaining = s.substr(0, i) + s.substr(i + k);

-> Alternative (modifies original string)
string s = "aaabcc";
s.erase(i, 2);

NOTE: Safety note (important in loops)
if (i + k <= s.size()) {
    // safe
}


NOTE: One-line summary (remember this)
n - 1 = number of candidate strings, NOT number of distinct strings



 Generalized Table — Total Strings (Before Removing Duplicates)
Let:

string length = n

remove k consecutive elements
-------------------------------------------------------------------------
What you remove	k	Total strings (candidates)	Formula
-------------------------------------------------------------------------
1 element	    1  n	n - 1 + 1
2 consecutive	2	n - 1	n - 2 + 1
3 consecutive	3	n - 2	n - 3 + 1
k consecutive	k	n - k + 1	n - k + 1
whole string	n	1	n - n + 1















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


NOTE:For a palindrome, positions i and n - i - 1 must be equal.
-----------------------------------------------------------------------------------------------------------------------------------
eucldean distance between two ppints in cpp
double dist = hypot(x2 - x1, y2 - y1);











 ---------------------------------------------------------- MATH TRICKS---------------------------------------------
==============================================================================================================================================================================================================================================================================================================================================
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
==============================================================================================================================================================================================================================================================================================================================================

==============================================================
                MODULO (`a % b`) REPLACEMENTS — QUICK NOTES
==============================================================

                1) Integer division
                a % b = a - (int)(a / b) * b
                Condition: Always

                2) Floor formula (math)
                a % b = a - b * floor(a / b)
                Condition: Always

                3) Repeated subtraction
                a % b = value after subtracting b until < b
                Condition: Always (slow)

                4) Bitwise AND trick
                a % b = a & (b - 1)
                Condition: b is power of 2

                5) Binary long division
                a % b = remainder after shift–subtract
                Condition: No '/' or '%'

                6) Loop stepping
                a % b = a - (largest multiple of b ≤ a)
                Condition: Always (slow)

                7) Mul + div form
                Let k = a / b
                a % b = a - k * b
                Condition: Always

==============================================================
////////////////stable square root of number////////////////////
  auto sq = [&] (ll x){return x*x;};

  NOTE:1____ GCD(a1,a2,a3,…,an)=GCD(a1,a1+a2,a1+a2+a3,…,a1+a2+a3+)

===============================================================================================================

*****************************************************
*  Count Total Pairs in an Array with Sum = K
*  Language: C++
******************************************************

#include <bits/stdc++.h>
using namespace std;

=====================================================
  METHOD 1: Brute Force
  -----------------------------------------------------
  Idea  : Check all possible pairs (i < j)
  Time  : O(n^2)
  Space : O(1)
=====================================================
long long countPairsBruteForce(vector<int>& a, int k) {
    int n = a.size();
    long long cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k)
                cnt++;
        }
    }
    return cnt;
}

/*=====================================================
  METHOD 2: Hash Map (Frequency Map)
  -----------------------------------------------------
  Idea  : For each x, count how many (k - x) appeared
  Time  : O(n)
  Space : O(n)
=====================================================
long long countPairsHashMap(vector<int>& a, int k) {
    unordered_map<int, long long> freq;
    long long cnt = 0;

    for (int x : a) {
        cnt += freq[k - x];
        freq[x]++;
    }
    return cnt;
}

/*=====================================================
  METHOD 3: Sorting + Two Pointers
  -----------------------------------------------------
  Idea  : Sort array, use two pointers, handle duplicates
  Time  : O(n log n)
  Space : O(1)  (excluding sort stack)
=====================================================
long long countPairsTwoPointers(vector<int>& a, int k) {
    sort(a.begin(), a.end());
    int l = 0, r = a.size() - 1;
    long long cnt = 0;

    while (l < r) {
        int sum = a[l] + a[r];

        if (sum == k) {
            if (a[l] == a[r]) {
                long long len = r - l + 1;
                cnt += (len * (len - 1)) / 2;
                break;
            }
            long long c1 = 1, c2 = 1;
            while (l + 1 < r && a[l] == a[l + 1]) c1++, l++;
            while (r - 1 > l && a[r] == a[r - 1]) c2++, r--;
            cnt += c1 * c2;
            l++; r--;
        }
        else if (sum < k) l++;
        else r--;
    }
    return cnt;
}

=====================================================
  DRIVER CODE
=====================================================
int main() {
    vector<int> arr = {1, 5, 7, 1};
    int k = 6;

    cout << "Brute Force: " << countPairsBruteForce(arr, k) << endl;
    cout << "Hash Map   : " << countPairsHashMap(arr, k) << endl;
    cout << "Two Pointer: " << countPairsTwoPointers(arr, k) << endl;

    return 0;
}











=====================checking if number is prefect square or not====================================

auto check = [&] (ll n ){
        if(n < 0) return false;

        ll x = sqrt(n);

        return x*x == n||(x+1)*(x+1) == n;


     };

==========================================================================================================
==========================================================================================================

=========================DIVISIBLITY OF NUMBER BY 2^n  ======================================================

we have to check if number is divisble by 2^n;
then 
---------->>>>> number of two in that number >= n<<<<<<-------------
 number of two in that number should be greater or equal to n
---------------------------------------------------------------------------
==================================================================================================================




















==================================================================================================================================================

What is string(k, c)?
In C++:
string(k, c)
means: Create a string of length k where every character is c.


============================================================================================================================================================

TOPIC: Column-wise Sum of Pairwise Absolute Differences


long long columnPairwiseAbsSum(const vector<vector<long long>> &grid,
                              int n, int m)
{
    long long total = 0;

    // iterate over each column
    for(int col = 0; col < m; col++)
    {
        vector<long long> v;

        // collect all elements of this column
        for(int row = 0; row < n; row++)
            v.push_back(grid[row][col]);

        // sort so |a - b| becomes (b - a) for ordered elements
        sort(v.begin(), v.end());

        // prefix sum trick to accumulate pairwise differences
        long long pref = 0;
        for(int i = 0; i < n; i++)
        {
            // contribution of v[i] with all previous values
            total += v[i] * i - pref;
            pref += v[i];
        }
    }

    return total;
}


================================================================================
calculate sum from start to end 
 ll sum = ((start=end)*(end-start+1))/2;



i⋅m%10=(10+i)⋅m%10 for all i from 0 to 9

==========================================================================================================================================================================================================================================================================================================================================================================================================
==========================================================================================================================================================================================================================================================================================================================================================================================================
==========================================================================================================================================================================================================================================================================================================================================================================================================



        for(ll i = 0;i<n;i++){
                for(int j = i+1;j<n;j++){
                    if(v[j]-v[i] == j-i)cnt++;
                }
            }
            for(ll i =0;i<n;i++){
                ll key = v[i]-i;
                  cnt+=mp[key];
                   mp[key]++;
            }
            cout << cnt<<nl;


=================================================================================================================================================================================
=================================================================================================================================================================================
To get minimax out of these elements
        auto s = to_string(ak);//makestring
        auto [mini,maxi] = minmax_element(s.begin(),s.end());




==========================================================================================================================================================================================================
===================================================================================================================================================================================================================
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // ===============================
    // __builtin_clz(x)
    // ===============================
    // clz = Count Leading Zeros
    //
    // It counts number of 0-bits
    // BEFORE the first 1-bit from the LEFT
    //
    // IMPORTANT:
    // - Works on 32-bit integers (int)
    // - __builtin_clz(0) is UNDEFINED (never use 0)
    // ===============================


    int x1 = 1;
    // Binary (32-bit):
    // 00000000 00000000 00000000 00000001
    cout << __builtin_clz(x1) << "\n";  
    // Output: 31


    int x2 = 2;
    // Binary:
    // 00000000 00000000 00000000 00000010
    cout << __builtin_clz(x2) << "\n";  
    // Output: 30


    int x3 = 4;
    // Binary:
    // 00000000 00000000 00000000 00000100
    cout << __builtin_clz(x3) << "\n";  
    // Output: 29


    int x4 = 6;
    // Binary:
    // 00000000 00000000 00000000 00000110
    cout << __builtin_clz(x4) << "\n";  
    // Output: 29


    int x5 = 8;
    // Binary:
    // 00000000 00000000 00000000 00001000
    cout << __builtin_clz(x5) << "\n";  
    // Output: 28


    // ===============================
    // Finding MSB index using clz
    // ===============================
    // MSB index = 31 - __builtin_clz(x)
    // (0-indexed from right)
    // ===============================

    int y = 6;
    // Binary: 110
    int msb_index = 31 - __builtin_clz(y);
    cout << msb_index << "\n";
    // Output: 2  (since 2^2 = 4 is MSB)


    // ===============================
    // Finding MSB VALUE using clz
    // ===============================
    // MSB value = 1 << msb_index
    // ===============================

    int msb_value = 1 << msb_index;
    cout << msb_value << "\n";
    // Output: 4


    // ===============================
    // Long long version
    // ===============================
    // Use __builtin_clzll for 64-bit
    // ===============================

    long long z = 1LL << 40;
    // Binary: 1 at position 40
    cout << __builtin_clzll(z) << "\n";
    // Output: 23  (since 64 - 1 - 40 = 23)


    int msb_ll = 63 - __builtin_clzll(z);
    cout << msb_ll << "\n";
    // Output: 40


    // ===============================
    // Comparison with __lg
    // ===============================
    // __lg(x) = floor(log2(x))
    // Same as MSB index
    // ===============================

    int t = 10;
    // Binary: 1010
    cout << __lg(t) << "\n";  
    // Output: 3

    cout << 31 - __builtin_clz(t) << "\n";
    // Output: 3


    // ===============================
    // WARNING (VERY IMPORTANT)
    // ===============================
    // __builtin_clz(0) is UNDEFINED
    // NEVER DO THIS:
    //
    // cout << __builtin_clz(0);
    //
    // Always ensure x > 0
    // ===============================




        Quick mental summary (no theory, just rules)
        // int (32-bit)
        msb_index = 31 - __builtin_clz(x);

        // long long (64-bit)
        msb_index = 63 - __builtin_clzll(x);




===================================================================================================================================================================================================================================================================================================================================================================================
===================================================================================================================================================================================================================================================================================================================================================================================
if there are c elements in a group:

Number of ways to choose any 2 distinct elements is:

(c , 2)  = (c*(c-1))/2;
=====================================================================================================================================================================================================================================================================================================================================================================================================================
=====================================================================================================================================================================================================================================================================================================================================================================================================================
Binary index = power of two exponent (LSB = 0).
Array index = memory position.
They are different concepts.
string s = "101";
msb_index = s.length() - 1;  // NOT 0


What MSB means ?

MSB = Most Significant SET Bit

It must be a 1

If a bit is 0, it contributes no value

A number is defined by its highest 1


Why this is sufficient (one line) ?
Because the highest set bit decides the comparison
(ai & aj) ≥ (ai ⊕ aj) — lower bits can never overturn it.



*/















#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define nl '\n'

void solve(){

}

void MASTER() {


    ll n;cin>>n;
    vector<ll>v(n+1);for(int in =0;in<n;in++)cin>>v[in];




     

        


      

    
                

    


    


         



           

}
  


int main() {

    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
   
    int t ;
    t=1;
    cin >> t;
    while (t--) {
     MASTER();
     //solve();
    }

  
    return 0;
}
