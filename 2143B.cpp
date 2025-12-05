
// simple template-test2
// code by divyansh rawat

    #include <bits/stdc++.h>
    using namespace std;

void solve() {
    
    int n,k;cin>>n>>k;
    vector<int>a(n);for(int &in:a)cin>>in;
    vector<int>b(k);for(int &in:b)cin>>in;
    if(a.size()==1 && b.size()==1){
        cout << 0 << endl;
        return;  
    }
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end());
    int ptr = 0;
    int total_free = 0;
    int sum_prices = accumulate(a.begin(),a.end(),0);

    for(int i = 0;i<b.size();i++){
        if(ptr+b[i]>n) break;
        total_free += a[ptr+b[i]-1];
        ptr += b[i];


    }
    cout << sum_prices- total_free << endl;




    



    
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
