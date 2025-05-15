#include<bits/stdc++.h>
using namespace std;
// calculate sum
long long int fun(long long int n){
    if(n % 2 == 0){
        return n/2;
    }
    else{
      return -(n+1)/2;
}
}


int main(){
    long long int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}