
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int count = 0;

    int n , m;
    cin >> n >> m;
   

    vector<int>v(m);
    for(int i = 0; i < m; i++)cin >> v[i];
    
     int el = (n*(n+1))/2;
     vector<int>b;
      b.reserve(el);


    for (int i = 1; i <= n; i++) {      
        for (int j = 1; j <= i; j++) {  
            b.push_back(j);            
        }
    }
    
    








    if (b.size() < v.size()) {
        cout << 0 << endl;
        return;
    }
    
    for(int i = 0; i <= b.size() - v.size(); i++) {
        bool match = true;
        for(int j = 0; j < m; j++) {
            if(b[i + j] != v[j]) {
                match = false;
                break;
            }
        }
        if(match) count++;
    }
    cout << count << endl;




   

  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
