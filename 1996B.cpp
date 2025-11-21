
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    vector<vector<int>> grid(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char c;
            cin >> c;             
            grid[i][j] = c - '0'; 
        }
    }
    for(int i = 0; i < n; i+=k){
        for(int j = 0; j < n; j+=k){
            cout << grid[i][j];
        }
        cout <<endl;
    }





    




    


  

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
