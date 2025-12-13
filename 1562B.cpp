
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




*/




#define nl '\n'


void solve() {

                    
            int k;
            string n;

            cin >> k;
            cin >> n;



            


          
           vector<bool>prime(100);
           prime[0] = prime[1] = false;

        

           for(int i =2;i<100;i++){
            prime[i]=true;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                 prime[i]=false;
                  break;
                }
            }
           }

           for(int i =0;i<n.size();i++){
            if(n[i]=='1'||n[i]=='4'|| n[i]=='6'|| n[i]=='8'||n[i]=='9'){
                cout << 1 << nl;
                cout << n[i]<<nl;
                return;
            }
           }

           for (int i = 0; i < n.size(); i++) {
              for (int j = i + 1; j < n.size(); j++) {

                int val = (n[i] - '0') * 10 + (n[j] - '0');

                if (!prime[val]) {
                    cout << 2 << nl;
                    cout << n[i] << n[j] << nl;
                return;
            }
        }
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
