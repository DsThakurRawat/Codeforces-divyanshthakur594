#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){ 
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for(int i = 0; i < n; i++) cin >> h[i];

        int maxH = *max_element(h.begin(), h.end());
        queue<pair<int, int>> q;  // (index, current_time)
        vector<bool> visited(n, false);

        q.push({k - 1, 0});
        visited[k - 1] = true;

        bool found = false;

        while(!q.empty()){
            auto [curr, time] = q.front(); q.pop();

            
            if(time >= h[curr]) continue;

            // If current tower is of max height
            if(h[curr] == maxH){
                found = true;
                break;
            }

            for(int i = 0; i < n; i++){
                if(visited[i]) continue;

                int t_cost = abs(h[curr] - h[i]);

                if(time + t_cost < h[curr]){
                    visited[i] = true;
                    q.push({i, time + t_cost});
                }
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }

    return 0;
}
