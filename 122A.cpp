#include<bits/stdc++.h>
using namespace std;

bool islucky(int n ){
    if(n == 0) return false;

    while(n > 0){
        int digit = n % 10;
        if(digit != 4 && digit != 7) return false;

        n = n /10;
    }
    return true;
}


int main(){
   int n;
   cin >> n;
   for(int i =1; i<=n; i++){
    if(islucky(i) && n % i == 0){
        cout << "YES" << endl;
        return 0;
    }
   }
   cout<< "NO" << endl;
   return 0;

    
} 