#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
    int n ,s; // here s is starting position its index actually ig
    cin >> n >> s;
    vector < int > vect;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vect.push_back(x);

    }
   int low = vect[0];
   int high = vect[n-1];

   int ans;

   if(s <= low) ans = high  - s;
   else if (s >= high ) ans = s - low;
   else{
    int path1 = (s- low) + high - low;
    int path2 = high - s + high - low;
    ans = min(path1 , path2);
   }

cout << ans << endl;






      
   }



      
       
      


   
   return 0;

    
} 