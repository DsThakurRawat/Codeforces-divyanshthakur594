
// simple template-test2
// code by divyansh rawat

    #include <bits/stdc++.h>
    using namespace std;

void solve() {
    
    int n,k;cin>>n>>k;
    vector<long long >a(n);for(long long  &in:a)cin>>in;
    vector<long long >b(k);for(long long  &in:b)cin>>in;
    if(a.size()==1 && b.size()==1){
        cout << 0 << endl;
        return;  
    }
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end());
    int ptr = 0;
    long long total_free = 0;
    long long  sum_prices = accumulate(a.begin(),a.end(),0LL);

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
