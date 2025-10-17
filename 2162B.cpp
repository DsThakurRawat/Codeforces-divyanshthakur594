
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  
    int n;
    string s;
    cin >> n >> s;
    int len = 0;
    vector<int>indexarray;

    // each character is not greater than next on
    //  and x must be pallindrome

    for(int i = 0; i < n; i++){
        if(s[i] = '1') indexarray.push_back(i);
    }

    cout << indexarray.size() << endl;

    if(indexarray.size() == 0) cout << " " << endl;
    else{
        for(auto &p : indexarray) cout << p << endl;
    }
    




    



    











    
    





















   

  
   

    

       

        
        
    }
   

  
    

    


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
