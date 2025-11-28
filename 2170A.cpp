
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;cin>>n;
    vector<vector<int>> v(n+1, vector<int>(n+1));

    int el=1;
    int maxi =0;
   
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            v[i][j] = el++;
        }
    }
    for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        int sum = v[i][j];
        if(i > 1) sum += v[i-1][j];  
        if(i < n) sum += v[i+1][j];    
        if(j > 1) sum += v[i][j-1];    
        if(j < n) sum += v[i][j+1];   

        maxi = max(maxi, sum);
    }


    } 
    cout << maxi<<endl;


 








  

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
