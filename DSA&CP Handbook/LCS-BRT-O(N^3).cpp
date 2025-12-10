//✅ Bruteforce C++ Code (Longest Common Substring)
#include <bits/stdc++.h>
using namespace std;

string bruteLCS(string a, string b) {
    int n = a.size();
    string best = "";

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            string sub = a.substr(i, j - i + 1); // substring a[i..j]

            // check if sub is present in b
            if (b.find(sub) != string::npos) {
                if (sub.size() > best.size()) {
                    best = sub;
                }
            }
        }
    }

    return best;
}

int main() {
    string a = "abcdxyz";
    string b = "xyzabcd";

    cout << bruteLCS(a, b) << "\n";
}
