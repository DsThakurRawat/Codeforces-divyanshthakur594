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
    nji
    */
   int mini = 0;

   for(int i = 0 ; i < n; i++){
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
    else cout << (mini / 2) + 1 << endl;
   }



      
   }



      
       
      


   
   return 0;

    
} 