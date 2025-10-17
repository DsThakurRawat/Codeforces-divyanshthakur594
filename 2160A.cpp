
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int best_avg = 0;
    int avg = 0;
    // best avg = max sum of element in subaaryy/no of element in subaary
    

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){

            sum += v[j];
            avg = (sum)/i - j + 1;
            best_avg = max(avg,best_avg);



            
            

        }
    }

    cout << best_avg << endl;




  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
