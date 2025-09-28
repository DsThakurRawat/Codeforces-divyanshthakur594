
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    /*
    timer set = b;
    everys second timer dec is by 1
    bomb explodes when timer reaches 0
    if i used ith tool timer will increase by xi
    newtime = min(c + Xi , a);
    timer dec is by 1;
    if timer reaches 0,the bomb explodes;


    */

    int a , b , n;
    cin >> a >> b >> n;
    vector<int>v(n+1);

    for(int i = 0; i < n; i++) cin >> v[i];
    // a the maximum value of bombs timer
    // b intitial value of bombs timer
    // n number of tools
    // for each test case output maxi
    int sum = b;
    for(int i = 0; i < n; i++){
        sum = sum + min(a-1,v[i]);
    }
    cout << sum << endl;

  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
