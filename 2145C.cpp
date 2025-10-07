
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   
    int n; cin >> n;
    string s; cin >> s;
   


    int A = 0;
    int B = 0;

    for(auto c : s){
        if ( c == 'a') A++;
        else B++;
    }
    if( A == B){
        cout << 0 << endl;
        return;

    }
    int diff = A - B;

    map<int,int> freq;

    freq[0] = 0;
    int presum = 0, ans = INT_MAX;

    vector<int>temp(n);
    for(int i = 0; i < n; i++){
        if(s[i] == 'a') temp[i] = 1;
        else temp[i] = -1;
    }
   int total_sum = accumulate(temp.begin(),temp.end(),0);




    for(int i = 0; i < n; i++){
        presum +=temp[i];
        int target = total_sum - presum;
        if(freq.count(target)) ans = min(ans, i-freq[target]+1);

        freq[presum] = i + 1;
    }

        
      
  if(ans == INT_MAX ) cout << -1 << endl;
  else cout << ans << endl;










  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
