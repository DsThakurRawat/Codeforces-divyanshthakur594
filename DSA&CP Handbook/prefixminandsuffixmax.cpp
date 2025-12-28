#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> pref(n), suf(n);

    // PREFIX MINIMUM
    pref[0] = a[0];
    for(int i = 1; i < n; i++) {
        pref[i] = min(pref[i-1], a[i]);
    }

    // SUFFIX MAXIMUM
    
    suf[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--) {
        suf[i] = max(suf[i+1], a[i]);
    }

    // print to check
    for(int x : pref) cout << x << " ";
    cout << "\n";

    for(int x : suf) cout << x << " ";
    cout << "\n";
  ll ans = stoll


  f(k%2==0 || k % 5 == 0){
            return -1;
      

        ll r = 0;

            for(ll l =0;l<=k;l++){
                r = (r*10+1)%k
                if(r % 2 == 0)return l;
            }
            return -1;©leetcode
}

class Solution {
public:
    using ll = long long;

    class Solution {
public:
    using ll = long long;

    long long minimumCost(int cost1, int cost2, int costBoth,
                          int need1, int need2) {

        auto lumiscaron = make_tuple(cost1, cost2, costBoth, need1, need2);

        ll ans = 0;

        // Step 1: cover both sides together
        ll both = min(need1, need2);
        if (costBoth < cost1 + cost2) {
            ans += both * costBoth;
            need1 -= both;
            need2 -= both;
        }

        // Step 2: use type-3 for remaining need1 if cheaper
        if (costBoth < cost1) {
            ans += 1LL * need1 * costBoth;
            need1 = 0;
        }

        // Step 3: use type-3 for remaining need2 if cheaper
        if (costBoth < cost2) {
            ans += 1LL * need2 * costBoth;
            need2 = 0;
        }

        // Step 4: finish remaining normally
        ans += 1LL * need1 * cost1;
        ans += 1LL * need2 * cost2;

        return ans;
    }
};

