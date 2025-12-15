#include <bits/stdc++.h>
using namespace std;

void name(int n) {
    if (n <= 0) return;  // base case to stop recursion
    cout << "Divyansh" << endl;
    name(n - 1);         // recursive call with smaller value
}

int main() {
    int n;
    cin >> n;            // enter a number like 5
    name(n);             // prints "Divyansh" n times
    return 0;
}
