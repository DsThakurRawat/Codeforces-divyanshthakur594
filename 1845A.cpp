#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
    /*
    x -> is a number that  i can not have 
    

    numbers available from 1 to k;
    n = 1 + 1 +.......+n; // this is very efficient 
    probelam rises when when 
    case x != 1 --> one is available 
                   i will print n 1
    case x == 1 --> when one is not available 
                    1 to k basically one is not available  
                what if k == 1 then basically    no integers available
                what if k == 2 u only have 2 available in abudance 
                
     



    

    */

     int n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout << "\n";
        }
        else if (k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            cout << n / 2 << "\n";
            if (n % 2 == 1) {
                cout << 3 << " ";
                for (int i = 1; i < n / 2; i++) {
                    cout << 2 << " ";
                }
            }
            else {
                for (int i = 0; i < n / 2; i++) {
                    cout << 2 << " ";
                }
            }
            cout << "\n";
        }
    }
     return 0;
   }



      
       
      


   
 

    
