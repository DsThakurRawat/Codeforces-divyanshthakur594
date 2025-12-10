//C++ Code (Works for different lengths n and m)
#include <bits/stdc++.h>
using namespace std;

string longestCommonSubstringBrute(string a, string b) {
    // Always iterate on the smaller string for fewer substrings
    string s1 = a.size() <= b.size() ? a : b;
    string s2 = a.size() > b.size() ? a : b;

    int n = s1.size();
    string best = "";   // longest common substring found

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            string sub = s1.substr(i, j - i + 1);  // substring s1[i..j]

            // check if this substring appears in s2
            if (s2.find(sub) != string::npos) {

                if (sub.size() > best.size()) {
                    best = sub;
                }
            }
        }
    }

    return best;
}

int main() {
    string a = "helloworld";
    string b = "lowor";

    cout << longestCommonSubstringBrute(a, b) << "\n";  
}
