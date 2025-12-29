#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define popcount __builtin_popcount
#define all(a) (a).begin(), (a).end()
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
template<typename T> using ordered_set = tree<T,null_type,less_equal<>,rb_tree_tag,tree_order_statistics_node_update>;

int query(int l, int r) {
    cout<<"? " << l<<' '<<r<<endl;
    int res; cin >> res;
    return res;
}

void A() {
    int x; cin >> x;
    vector<int> b(20);
    for (int i = 0; i < 15; i++) {
        b[i] = (x-1 >> i) & 1;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 15; j++) {
            if ((j+1 >> i) & 1) {
                b[i + 15] ^= b[j];
            }
        }
    }
    b[19] = b[15] ^ b[16] ^ b[17] ^ b[18];
    cout << accumulate(all(b), 0) << '\n';
    for (int i = 0; i < 20; i++) if (b[i])
        cout << i+1 << " ";
    cout << "\n";
}

void B() {
    vector<int> b(20);
    int k; cin >> k;
    for (int i = 0; i < k; i++) {
        int x; cin >> x;
        x--;
        b[x] = 1;
    }
    if (b[19] == (b[15] ^ b[16] ^ b[17] ^ b[18])) {
        int pos = 0;
        for (int i = 0; i < 4; i++) {
            int expected = 0;
            for (int j = 0; j < 15; j++) {
                if ((j+1 >> i) & 1) {
                    expected ^= b[j];
                }
            }
            if (expected != b[i + 15])
                pos |= 1 << i;
        }
        if (pos != 0)
            b[pos-1] ^= 1;
    }
    int x = 0;
    for (int i = 0; i < 15; i++) {
        if (b[i]) {
            x |= 1 << i;
        }
    }
    cout << x+1 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string ty; cin >> ty;
    int t; cin >> t;
    while (t--)
        ty == "first" ? A() : B();
}