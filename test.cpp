#include<bits/stdc++.h>
using namespace std;



int main(){
   

    // lucky numbers are positive numbers integers whose decimal respresentation contain on th lucky digit
    // 4 and 7;
    long long n;
    cin >> n;
    if( n ==0) {
         cout << "No"<<endl;
         return 0;}

    while(n > 0){
        int digit = n % 10;\
        if( digit != 4 && digit != 7){ cout << "No" << endl;
        return 0;
          }
        n = n /10;

    }
    

     
cout << "Yes" << endl;

return 0;
    
} 