
// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; 
    cin >> n;
    vector<int> a(n), b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    //If number of 1s is even → result = 0
    //If number of 1s is odd → result = 1
    int count_ones = 0;
    int k =-1;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            count_ones++;
        }
        if(b[i] == 1){
         count_ones++;
        }
      


    }
     for(int i = n-1; i >=0; i--){
      if(a[i] != b[i] ){ 
            k = i;
            break;
        }
    }

    if(count_ones % 2==0){
        cout << "Tie"<<endl;
 
    }
    if( k == -1){
        cout << "Tie"<<endl;
    }
    if( k % 2 == 0) cout <<"Ajisai"<<endl;
    else cout << "Mai"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
