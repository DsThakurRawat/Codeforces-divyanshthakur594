
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>v(n);for(int i = 0; i < n; i++)cin>>v[i];
    // ps we ha ve to keep sum minimu so we will replace -1 with that integer where sum is minimum
    /// lets say if |mod b| = last element - first element 
    /*
    if any one of them  not exist  simply keep = element that exist make mode minumum meaans  0 
    */
        int min_mod_b = 0;

        if(v[0] != -1 && v[n-1] != -1){
            min_mod_b = abs(v[n-1]-v[0]);
        }
        else if( v[0]!= -1 && v[n-1] == -1){
           
            min_mod_b = 0;
            v[n-1] = v[0];
        }
        else if(v[0] == -1 && v[n-1] != -1){
            min_mod_b = 0;
            v[0] =v[n-1]; 
        }
         else { 
       
        v[0] = v[n-1] = 0;
        min_mod_b = 0;
    }


// now create new vector array b which should be lexigraphicall samllest  such that we have to replace -1 in that way of v[i] we get lexigraphically samllere one array after doing above operations we can only modified those position where -1 is present;
vector<int>b = v;

   for(int i = 0; i < n; i++){
        if(b[i] == -1) b[i] = 0;
    }
     cout << min_mod_b << endl;;
    for(int i = 0; i < n; i++) cout << b[i] << " ";
    cout << endl;





        










 


  
 








  

}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
