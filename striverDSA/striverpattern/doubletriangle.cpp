#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int instar =0;

    for(int i =0; i < n; i++){
        // stars
        for(int j =1; j <=n-i; j++){
            cout << "*";
        }
        // spaces
        for(int j =0; j < instar; j++){
            cout << " ";
        }
        // stars
        for(int j =1; j <=n-i; j++){
            cout << "*";
        }
        instar +=2;
        cout << endl;
         

        
    }
   int  inistar =2*n-2;
   for(int i =1; i < n; i++){
    // stars
    for(int j =1; j <=i; j++){
        cout << "*";
    }
    // spaces
    for(int j =0; j < inistar; j++){
        cout << " ";
    }
    // stars
    for(int j =1; j <=i; j++){
        cout << "*";
    }
    inistar -=2;
    cout << endl;
     

    
}











    
}