/*
DIVYANSH RAWAT
MASTER TEMPLATE
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
void solve() {
    return;
}

void MASTER() {
     string s;
    cin>>s;
    int n=s.size();
    if(n==1){
        cout<<1<<nl;
        return;
    }
    bool flag1=0,flag=0;
    for(int i=0;i<n;i++){
        if(s[i]=='>') flag1=1;
        if((s[i]=='<' || s[i]=='*') && flag1) flag=1;
        if(s[i]=='*') flag1=1;
    }
    if(flag){
        cout<<-1<<nl;
        return;
    }
    int cnt=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='>') break;
        cnt++;
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='<') break;
        cnt2++;
    }
    cout<<max(cnt,cnt2)<<nl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        MASTER();
        solve();
    }

    return 0;
}
