#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

       
        priority_queue<int, vector<int>, greater<int>> pq;

       
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < a[i]; ++j) {
                pq.push(b[i]);
            }
        }

        
        for (int i = 0; i < n; ++i) {
            pq.push(p);
        }

       
        long long total_cost = p;

        // Add n - 1 cheapest available shares
        for (int i = 0; i < n - 1; ++i) {
            total_cost += pq.top();
            pq.pop();
        }

        cout << total_cost << '\n';
    }

    return 0;
}
