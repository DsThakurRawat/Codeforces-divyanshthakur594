
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



================Correct Sieve of Eratosthenes (proper way) ✅===============

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




*/




#define nl '\n'


void solve() {


         int n;cin>>n;
         vector<int>v(n);for(auto &in:v)cin>>in;
         int m;cin>>m;
        
        auto checkisomorphic = [&](const vector<int>&a,const string& s)->bool{
            map<int,char>mp1;
            map<char,int>mp2;
            
            for(int i =0;i<(int)a.size();i++){
                if(mp1.count(a[i]) && mp1[a[i]]!=s[i]) return false;
                if(mp2.count(s[i]) && mp2[s[i]]!=a[i])return false;

                mp1[a[i]] = s[i];
                mp2[s[i]] = a[i];


            }


            return true;

        };









        

         while(m--){
            string s;
            cin>>s;
            
            if(s.size()==n && checkisomorphic(a,s)==true)














         }


        
        
          
         



           

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
