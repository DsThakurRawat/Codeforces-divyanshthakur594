#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
   /*
    */ // outerloop controls row   
   for(int i =1; i < 2*n-1; i++){
          int stars  = i; // here row means i row == i
          if(i > n) stars = 2*n-i; 
          for(int j = 1; j <=stars; j++){
            cout << "*";
          }
          cout << endl;
   }
}
