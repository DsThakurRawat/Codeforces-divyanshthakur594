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
    vector < int > vect;
    vect.push_back(0);

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        vect.push_back(input);
    }

    vect.push_back(x);

    n = vect.size();

    int maxDist = INT_MIN;

    for(int i = 1; i < n; i++){
        if( i == n - 1) maxDist = max(maxDist, 2*(vect[i] - vect[i - 1]));
        else maxDist = max(maxDist , vect[i] - vect[i - 1]);


    }

    cout << maxDist << endl;
    



    






   }
   return 0;

    
} 