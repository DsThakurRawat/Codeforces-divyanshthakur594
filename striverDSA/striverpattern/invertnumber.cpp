#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin >> n;
    for(int i =0; i<n; i++){
        /* This loop runs n times (i = 0 to n-1).

        Each iteration represents a row.
        */
        for(int j=1; j < n+1-i; j++ ){
            cout <<j;
            /*
            This loop prints the stars in each row.

             n - i ensures that the number of stars decreases by 1 in each row.


            */
        }
        cout<<endl;
    }
}