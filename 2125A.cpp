
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    string sub1 = "FFT";
    string sub2 =  "NTT";
    int flag = 1; // man ke chal rahe hai ki hai

     if(s.find(sub1) != string::npos && s.find(sub2) != string::npos) {
        flag = 0;
   }

   for(int i = 0; i < s.size()-2; i++){
       if( s[i] == 'F' && s[i+1] == 'F' && s[i+2] == 'T'){
            s[i+1] = 'T';
        

       }
       if(s[i] == 'N' && s[i+1] == 'N' && s[i+2] == 'T'){
        s[i+1] ='T';
       }
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
