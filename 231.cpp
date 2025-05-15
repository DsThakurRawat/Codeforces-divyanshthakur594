#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n;
    cin >> n;
    int count =0;
    // catch how you will take input
    vector<vector<int >> data(n, vector<int>(3)); // taking input of rows and columns
    // now taking input
    for(int i =0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> data[i][j]; // input 
        }

    }
    for(const auto& row : data ){
        int ones =0;
        for(int val : row ){
            if(val == 1) ones++;
        }
        if(ones >=2 )
        count++;
    }
    cout<< count<< endl;
    

 }