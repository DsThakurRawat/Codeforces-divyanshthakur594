#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    /*
    1
    22
    333
    4444
    55555
    666666
    nnnnnnn
    
    */
   // in this we are just printing row number where row number is starting from 1 
    for(int i =0; i<=n; i++){ // note here i is row number 
         

     for(int j =1; j<=i; j++){ // here j is printing column
          cout << i;
    }
    cout << endl;

}
}