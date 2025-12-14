#include <bits/stdc++.h>
using namespace std;

int main() {

    /* GENERIC LAMBDA */
    auto isIsomorphicGeneric = [](const auto& A, const auto& B) -> bool {
        if (A.size() != B.size()) return false;

        map<typename decay<decltype(A[0])>::type,
            typename decay<decltype(B[0])>::type> fwd;

        map<typename decay<decltype(B[0])>::type,
            typename decay<decltype(A[0])>::type> rev;

        for (int i = 0; i < (int)A.size(); i++) {
            if (fwd.count(A[i]) && fwd[A[i]] != B[i]) return false;
            if (rev.count(B[i]) && rev[B[i]] != A[i]) return false;
            fwd[A[i]] = B[i];
            rev[B[i]] = A[i];
        }
        return true;
    };
//===========================================================================
    /* PATTERN METHOD */
    auto encodePattern = [](const auto& v) {
        map<typename decay<decltype(v[0])>::type, int> id;
        vector<int> pattern;
        int cur = 0;
        for (auto &x : v) {
            if (!id.count(x)) id[x] = cur++;
            pattern.push_back(id[x]);
        }
        return pattern;
    };
//==============================================================================
    auto isIsomorphicByPattern =
    [&](const auto& A, const auto& B) -> bool {
        if (A.size() != B.size()) return false;
        return encodePattern(A) == encodePattern(B);
    };

    /* TESTS */
    string s1 = "paper", s2 = "title";
    cout << isIsomorphicGeneric(s1, s2) << "\n";

    vector<long long> a = {1,2,1}, b = {3,4,3};
    cout << isIsomorphicGeneric(a, b) << "\n";

    cout << isIsomorphicByPattern(a, b) << "\n";

   //2️⃣ Lambda for String ↔ String (Explicit)
   auto isIsomorphicString = [](const string& s, const string& t) -> bool {
    if (s.size() != t.size()) return false;

    map<char, char> fwd, rev;

    for (int i = 0; i < (int)s.size(); i++) {
        if (fwd.count(s[i]) && fwd[s[i]] != t[i]) return false;
        if (rev.count(t[i]) && rev[t[i]] != s[i]) return false;

        fwd[s[i]] = t[i];
        rev[t[i]] = s[i];
    }
    return true;
};
//3️⃣ Lambda for Array ↔ Array
 auto isIsomorphicArray = [](const vector<long long>& a,
                            const vector<long long>& b) -> bool {
    if (a.size() != b.size()) return false;

    map<long long, long long> fwd, rev;

    for (int i = 0; i < (int)a.size(); i++) {
        if (fwd.count(a[i]) && fwd[a[i]] != b[i]) return false;
        if (rev.count(b[i]) && rev[b[i]] != a[i]) return false;

        fwd[a[i]] = b[i];
        rev[b[i]] = a[i];
    }
    return true;
};
//===================================================================================
//4️⃣ Lambda for String ↔ Array


auto isIsomorphicStringArray =
[](const string& s, const vector<long long>& a) -> bool {
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
};







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






//========================================================================






//5️⃣ Lambda Pattern-Encoding (Advanced & Elegant)


auto encodePattern = [](const auto& v) {
    map<typename decay<decltype(v[0])>::type, int> id;
    vector<int> pattern;
    int cur = 0;

    for (auto &x : v) {
        if (!id.count(x)) id[x] = cur++;
        pattern.push_back(id[x]);
    }
    return pattern;
};





















    return 0;











}
