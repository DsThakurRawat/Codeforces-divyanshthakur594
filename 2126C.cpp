#include<bits/stdc++.h>
using namespace std;
// solution by divyansh thakur


int main(){
   int t;
   cin >> t;
   while(t--){ 
       
      int n;
      int k;

      cin >> n >> k;



      vector<int> h(n);

      for(int i = 0; i < n; i++) cin >> h[i];
   /*
 // hm we only need to find any one tower with max heights where we can reach befor be doonbe
// we can start on tower k whose ht is h[k-1];
//u will die at time t = h[k-1] when level uncrease by one
a teleport from tower i to tower j takes |h[i] - h[j]|




   */

int start = k - 1;

    int height 
    int maxheight = *max_element(h.begin(), h.end());

    // Already on max height
    if (h[start] == maxheight){
       cout << "YES" << endl;
       continue;
    
    }
    int flag = 0;
    for (int i = 0; i < n; ++i) {
        if (h[i] == maxheight) {
            int teleporttime = abs(h[i] - h[start]);
            if (teleporttime < h[start]) {
              flag = 1;
              break;
               
            }
        }
    }
      if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
  
}




    
   
   
return 0;

    
} 