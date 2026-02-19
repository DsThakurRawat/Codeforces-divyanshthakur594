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
    int n;
    cin>>n;
    vector<int> visited(1ll<<n,0);
    int N=(1ll<<n);
    int curr=(1ll<<n)-1;
    vector<int> res;
    int bit=n-1;
    int mx=curr;
    while(curr>0){
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<N;i++){
            if(visited[i]==1) continue;
            if((i&curr)==curr){
                pq.push(i);
                visited[i]=1;
            }
        }
        while(!pq.empty()){
            res.push_back(pq.top());
            pq.pop();
        }
        curr=curr>>1;
    }
    for(int i=0;i<N;i++){
        if(visited[i]==0) res.push_back(i);
    }
    for(auto x:res) cout<<x<<" ";
    cout<<nl;
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
