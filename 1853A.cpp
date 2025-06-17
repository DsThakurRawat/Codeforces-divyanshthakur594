#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
    int n;
    cin >> n;
    vector < int > v;
    for( int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    /*
    we will be given sorted
    array we need output minimum process to make an array unsorted
    approach 
    if mini < 0 --> print 0 operation array already disorted
    if mini == --> it will take one operation
    if mini > 0
          mini % 2 == 0 print(mini / 2 + 1)
          mini % 2 != 0 print( mini / 2 + 1)
          
    */
   int mini =INT_MAX;

   for(int i = 0 ; i < n-1; i++){
    mini = min(mini , v[i+1] - v[i]);
   }

   if(mini < 0){
    cout << 0 << endl;
   }
   else if(mini == 0){
    cout << 1 << endl;

   }
   else if ( mini > 0){
    if(mini % 2 == 0 ) cout <<( mini/2 ) + 1<< endl;
    if(mini % 2 !=0) cout << (mini / 2) + 1 << endl;
   }



      
   }



      
       
      


   
   return 0;

    
} 