#include <bits/stdc++.h>
using namespace std;

/* STRING ↔ STRING */
bool isIsomorphicString(const string& s, const string& t) {
    if (s.size() != t.size()) return false;

    map<char, char> fwd, rev;
    for (int i = 0; i < (int)s.size(); i++) {
        if (fwd.count(s[i]) && fwd[s[i]] != t[i]) return false;
        if (rev.count(t[i]) && rev[t[i]] != s[i]) return false;
        fwd[s[i]] = t[i];
        rev[t[i]] = s[i];
    }
    return true;
}

/* ARRAY ↔ ARRAY */
bool isIsomorphicArray(const vector<long long>& a,
                       const vector<long long>& b) {
    if (a.size() != b.size()) return false;

    map<long long, long long> fwd, rev;
    for (int i = 0; i < (int)a.size(); i++) {
        if (fwd.count(a[i]) && fwd[a[i]] != b[i]) return false;
        if (rev.count(b[i]) && rev[b[i]] != a[i]) return false;
        fwd[a[i]] = b[i];
        rev[b[i]] = a[i];
    }
    return true;
}

/* STRING ↔ ARRAY */
bool isIsomorphicStringArray(const string& s,
                             const vector<long long>& a) {
    if (s.size() != a.size()) return false;

    map<char, long long> fwd;
    map<long long, char> rev;
    for (int i = 0; i < (int)s.size(); i++) {
        if (fwd.count(s[i]) && fwd[s[i]] != a[i]) return false;
        if (rev.count(a[i]) && rev[a[i]] != s[i]) return false;
        fwd[s[i]] = a[i];
        rev[a[i]] = s[i];
    }
    return true;
}

// 
//===========INSIDE LAMBDA FUNCTION==============//
// Checking how to check if string is isomorphic or not
auto isIsomorphic = [&](const vector<int>& a, const string& s) -> bool {
    map<int, char> mp1;   // number -> character
    map<char, int> mp2;   // character -> number

    for (int i = 0; i < (int)a.size(); i++) {
        // same number must map to same character
        if (mp1.count(a[i]) && mp1[a[i]] != s[i])
            return false;

        // same character must map to same number
        if (mp2.count(s[i]) && mp2[s[i]] != a[i])
            return false;

        mp1[a[i]] = s[i];
        mp2[s[i]] = a[i];
    }
    return true;
};








/* PATTERN METHOD */
template <typename T>
vector<int> encodePattern(const vector<T>& v) {
    map<T, int> id;
    vector<int> pattern;
    int cur = 0;
    for (auto &x : v) {
        if (!id.count(x)) id[x] = cur++;
        pattern.push_back(id[x]);
    }
    return pattern;
}

bool isIsomorphicByPattern(const vector<long long>& a,
                           const vector<long long>& b) {
    return encodePattern(a) == encodePattern(b);
}

int main() {
    string s = "paper", t = "title";
    cout << isIsomorphicString(s, t) << "\n";

    vector<long long> a = {1,2,1}, b = {3,4,3};
    cout << isIsomorphicArray(a, b) << "\n";

    return 0;
}
