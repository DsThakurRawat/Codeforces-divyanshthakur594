#include <bits/stdc++.h>
using namespace std;
// solution by divyansh thakur

int main(){
    int t;
    cin >> t;
    while(t--){ 
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for(int i = 0; i < n; i++) cin >> h[i];

        int start = k - 1;
        int maxh = *max_element(h.begin(), h.end());
        int currentH = h[start];

        // Already on max height
        if (currentH == maxh){
            cout << "YES\n";
            continue;
        }

        bool canTeleport = false;
        for(int i = 0; i < n; ++i){
            if(h[i] == maxh){
                int teleportTime = abs(currentH - h[i]);
                int survivalTime = currentH - 1;

                if(teleportTime <= survivalTime){
                    canTeleport = true;
                    break;
                }
            }
        }

        cout << (canTeleport ? "YES\n" : "NO\n");
    }

    return 0;
}
