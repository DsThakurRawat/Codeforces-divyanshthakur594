#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v;
    long long w;
    bool operator<(const Edge &other) const {
        return w < other.w;
    }
};

struct DSU {
    vector<int> parent;
    DSU(int n) {
        parent.resize(n);
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int x) {
        if (x == parent[x]) return x;
        return parent[x] = find(parent[x]);
    }
    bool unite(int x, int y) {
        int xr = find(x), yr = find(y);
        if (xr == yr) return false;
        parent[xr] = yr;
        return true;
    }
};

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

        
        vector<Edge> edges;

       
        for (int i = 0; i < n; ++i) {
            edges.push_back({i, n, p});
        }

       
        vector<pair<int, int>> idx(n);
        for (int i = 0; i < n; ++i) {
            idx[i] = {b[i], i};
        }
        sort(idx.begin(), idx.end()); 
        
        for (int i = 0; i < n; ++i) {
            int u = idx[i].second;
            for (int j = i + 1; j < n; ++j) {
                int v = idx[j].second;
                int cost = min(b[u], b[v]);
                edges.push_back({u, v, cost});
            }
        }

       
        sort(edges.begin(), edges.end());
        DSU dsu(n + 1); // include Pak Chanek as node n
        long long mst_cost = 0;
        int count = 0;

        for (auto &e : edges) {
            if (dsu.unite(e.u, e.v)) {
                mst_cost += e.w;
                count++;
                if (count == n) break; // MST of n+1 nodes has n edges
            }
        }

        cout << mst_cost << '\n';
    }

    return 0;
}
