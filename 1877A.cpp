#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
    int n; // number  of teams
    cin >> n;

    vector<int>v;
   // answer is simply -Ve of sum of all efficiency of other teams 
   int sum = 0;
    for(int i =0; i<n-1; i++){
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;

    }






  cout << -sum << endl;





      






      
       
      


   }
   return 0;

    
} 