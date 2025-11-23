
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n,x,y;cin>>n>>x>>y;
    string s;cin>>s;
    int d1 = abs(x), d2 = abs(y);
    /*
    if input is '8' it will move in 
    where means it will move 1 unit overall on grid of x-y
    (x,y),(x,0),(y,0)  (-x,-y),(-x,0),(-y,0)
    if input is 4 it will move in only   (x,0),(y,0)  (-x,0),(-y,0) 

    now i want to reach at (x,y) any give coordinate how is this possible think
    */
   int i = 0;int j =0;
  for(int k = 0; k < s.size();k++){
    if(s[k] =='8')i++;
    else if(s[k] =='4')j++;
  }
  int use = min({d1, d2, i});
    d1 -= use;
    d2 -= use;
    i -= use;

    int remain = d1 + d2;
    if( remain <= i+j) cout << "yes"<<endl;
    else cout<< "NO"<<endl;

  






  

}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
