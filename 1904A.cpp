// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a , b; cin >> a >> b;
    int Xk, Yk; cin >> Xk >> Yk;
    int Xq, Yq; cin >> Xq >> Yq;


    vector<std::pair<long long, long long>> moves = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };
    set<pair<long long, long long>> king_attack_sources;
     for (const auto& move : moves) {
        king_attack_sources.insert({Xk + move.first, Yk+ move.second});
    }
     set<pair<long long, long long>> queen_attack_sources;
    for (const auto& move : moves) {
        queen_attack_sources.insert({Xq + move.first, Yq + move.second});
    }

    // Step 3: Count how many positions are common to both sets.
    int fork_count = 0;
    // We can iterate through one set and check for existence in the other.
    for (const auto& pos : king_attack_sources) {
        // .count() is a fast way to check if an element exists in a set.
        if (queen_attack_sources.count(pos)) {
            fork_count++;
        }
    }

    cout << fork_count << endl;


















    
  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
