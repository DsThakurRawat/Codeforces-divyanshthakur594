#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int n;
    cin >> n;


    for(int i =0; i < n; i++ ){
        for(int j =0; j<=i; j++){
            cout<< char(65+n-1-i+j) << " ";
        }
        cout<< endl;
    }
}