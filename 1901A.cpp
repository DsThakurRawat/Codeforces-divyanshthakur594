#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
             
       // possible case 
      // case 1: find distance between last station and destination and multipli it by 2
     // case 1.1 : find distance between starting point and 1st station 
    //  case 2: find distance between all station  
    // return (max of case 1 , case 2 , case 3)
    int n , x;
    cin >> n >> x;
    int st = 0;
    vector <int> v(n);
     for(int i = 0; i < n; i++ ) cin >> v[i];

     int case1 = x - v[n-1];
     int case2 = v[0] - st;
     int maxi = v[0];
     for(int i =0; i < n-1; i++){
        maxi = max(maxi,v[i] - v[i+1]);
          
     }
     int maxii = max(case1,case2);

     cout << max(maxii , maxi) << endl;


    






   }
   return 0;

    
} 