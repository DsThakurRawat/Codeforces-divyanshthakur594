#include <bits/stdc++.h>
using namespace std;

/* ───────────────────────────────────────────────────────────────
   METHOD 1 — BRUTE FORCE (VERY SLOW, ONLY FOR UNDERSTANDING)
   Time:  O(n*m*(n+m))
   Space: O(1)
   ─────────────────────────────────────────────────────────────── */
long long methodBruteForce(const vector<vector<int>>& a) {
    int n = a.size(), m = a[0].size();
    long long best = 0;

    auto walk = [&](int i, int j, int dx, int dy) {
        long long s = 0;
        while (i >= 0 && j >= 0 && i < n && j < m) {
            s += a[i][j];
            i += dx; j += dy;
        }
        return s;
    };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long xsum =
                walk(i,j,1,1) + walk(i,j,-1,-1) +
                walk(i,j,-1,1) + walk(i,j,1,-1) - 3LL * a[i][j];

            best = max(best, xsum);
        }
    }
    return best;
}

/* ───────────────────────────────────────────────────────────────
   METHOD 2 — DFS/BFS STYLE DIAGONAL WALK
   Same complexity as brute force. Educational only.
   ─────────────────────────────────────────────────────────────── */
long long methodDFS(const vector<vector<int>>& a) {
    int n = a.size(), m = a[0].size();
    long long best = 0;

    auto walk = [&](int i, int j, int dx, int dy) {
        long long s = 0;
        while (i >= 0 && j >= 0 && i < n && j < m) {
            s += a[i][j];
            i += dx; j += dy;
        }
        return s;
    };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long xsum =
                walk(i,j,1,1) + walk(i,j,-1,-1) +
                walk(i,j,-1,1) + walk(i,j,1,-1) - 3LL * a[i][j];
            best = max(best, xsum);
        }
    }
    return best;
}

/* ───────────────────────────────────────────────────────────────
   METHOD 3 — DIAGONAL ARRAYS (FASTEST, BEST FOR CP)
   Time:  O(n*m)
   Space: O(n+m)
   ─────────────────────────────────────────────────────────────── */
long long methodDiagonalArrays(const vector<vector<int>>& a) {
    int n = a.size(), m = a[0].size();
    int offset = m + 5;

    vector<long long> d1(n + m + 10, 0), d2(n + m + 10, 0);

    // Precompute diagonal sums
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            d1[i - j + offset] += a[i][j];
            d2[i + j] += a[i][j];
        }
    }

    long long best = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long xsum = d1[i - j + offset] + d2[i + j] - a[i][j];
            best = max(best, xsum);
        }
    }
    return best;
}

/* ───────────────────────────────────────────────────────────────
   METHOD 4 — UNORDERED_MAP DIAGONAL SUMS
   Time:  O(n*m)
   Space: O(n+m)
   Slightly slower due to hashing overhead.
   ─────────────────────────────────────────────────────────────── */
long long methodUnorderedMap(const vector<vector<int>>& a) {
    int n = a.size(), m = a[0].size();

    unordered_map<int, long long> d1, d2;

    // Precompute diagonal sums
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            d1[i - j] += a[i][j];
            d2[i + j] += a[i][j];
        }
    }

    long long best = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long xsum = d1[i - j] + d2[i + j] - a[i][j];
            best = max(best, xsum);
        }
    }
    return best;
}

/* ───────────────────────────────────────────────────────────────
   METHOD 5 — FOUR-DIRECTION DP (DIAGONAL DP)
   Time:  O(n*m)
   Space: O(n*m)
   More complex & slower than diagonal-array method.
   ─────────────────────────────────────────────────────────────── */
long long methodFourDirectionDP(const vector<vector<int>>& a) {
    int n = a.size(), m = a[0].size();

    vector<vector<long long>> dl(n, vector<long long>(m));
    vector<vector<long long>> dr(n, vector<long long>(m));

    // dp for ↘ (down-right)
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            long long nxt = (i+1 < n && j+1 < m ? dl[i+1][j+1] : 0);
            dl[i][j] = a[i][j] + nxt;
        }
    }

    // dp for ↗ (up-right)
    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--) {
            long long nxt = (i-1 >= 0 && j+1 < m ? dr[i-1][j+1] : 0);
            dr[i][j] = a[i][j] + nxt;
        }
    }

    long long best = 0;

    // Combine DP results
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            // Get sum of main diagonal through (i,j)
            long long mainDiag = dl[i][j];

            // Get sum of anti diagonal through (i,j)
            long long antiDiag = dr[i][j];

            long long xsum = mainDiag + antiDiag - a[i][j];
            best = max(best, xsum);
        }
    }
    return best;
}

/* ───────────────────────────────────────────────────────────────
   METHOD 6 — PREFIX-SUM DIAGONAL ARRAYS
   Time:  O(n*m)
   Space: potentially large due to storing entire diagonals
   ─────────────────────────────────────────────────────────────── */
long long methodPrefixDiagonalDP(const vector<vector<int>>& a) {
    int n = a.size(), m = a[0].size();

    unordered_map<int, vector<long long>> d1, d2;

    // Build diagonals
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            d1[i - j].push_back(a[i][j]);
            d2[i + j].push_back(a[i][j]);
        }
    }

    // Prefix sums
    for (auto &p : d1) {
        for (int i = 1; i < p.second.size(); i++) {
            p.second[i] += p.second[i - 1];
        }
    }
    for (auto &p : d2) {
        for (int i = 1; i < p.second.size(); i++) {
            p.second[i] += p.second[i - 1];
        }
    }

    long long best = 0;

    // Query each cell
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long mainDiag = d1[i - j].back();
            long long antiDiag = d2[i + j].back();
            long long xsum = mainDiag + antiDiag - a[i][j];
            best = max(best, xsum);
        }
    }
    return best;
}

/* ───────────────────────────────────────────────────────────────
   MAIN DRIVER
   ─────────────────────────────────────────────────────────────── */
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    // Call any method you want:
    cout << "Method 1 (Brute Force): " << methodBruteForce(a) << "\n";
    cout << "Method 2 (DFS): " << methodDFS(a) << "\n";
    cout << "Method 3 (Diagonal Arrays, BEST): " << methodDiagonalArrays(a) << "\n";
    cout << "Method 4 (unordered_map): " << methodUnorderedMap(a) << "\n";
    cout << "Method 5 (4-dir DP): " << methodFourDirectionDP(a) << "\n";
    cout << "Method 6 (Prefix Diagonal DP): " << methodPrefixDiagonalDP(a) << "\n";

    return 0;
}
