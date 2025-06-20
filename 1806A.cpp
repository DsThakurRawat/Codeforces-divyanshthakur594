#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 

      
       

/*
observation  
dy < sy --> the case is -1 bcz it don't give power to  move down
dy >= sy --> can move by only one
moves count = dy - sy;








*/
  int sx,sy,dx,dy;
  cin >> sx >> sy >> dx >> dy;
  if(dy < sy){
   cout << -1 << endl;
   continue;
  }
  int moves = dy - sy;
  sx += moves;

  if(sx < dx){
   cout << -1 << endl;
   continue;
  }
   moves += (sx-dx);
   cout << moves << endl;

    

      
   }



      
       
      


   
   return 0;

    
} 