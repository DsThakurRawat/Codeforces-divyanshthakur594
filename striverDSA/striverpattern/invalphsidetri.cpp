#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n; 
    cin >> n; 
    int numm = 65;
    for(int i =n; i >=0; i--){
         for(int j =0; j <= i; j++){
            cout << char(numm + j) << " "; // yaha j aarha hai bcoz we are printing column
         }
         cout << endl;

    }
}