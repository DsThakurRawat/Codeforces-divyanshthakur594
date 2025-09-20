
// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;

void solve() {
    //i-th jwellary price equals to i+1

    int n; cin >> n;

    vector<int>prime(n+1,1);
    for(long long i = 2; i <= n; i++){
        if(prime[i] == 1 && i*i <= n){
            for(int j = i*i; j <= n; j+=i){
            prime[j] = 0;
            }
        }
    }
    map<int,int>primecolor;
    int color_id = 1;
    
    for(int i = 2; i <= n + 1; i++){
        if(prime[i] == 1) primecolor[i] = color_id++;
    }

    vector<int> colors(n);
    for(int i = 0; i < n; i++) {
        for(auto &[p, c] : primecolor) {
            if((i+2) % p == 0) {
                colors[i] = c;
                break;
            }
        }
    }

    cout << color_id - 1 << endl;
    for(int i = 0; i < n; i++) cout << colors[i] << " ";
    cout << endl;

    


    
  







  
}

int main() {
    //int t ;
    //cin >> t;
   // while (t--) {
        solve();
  //  }
    return 0;
}
