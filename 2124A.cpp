#include<bits/stdc++.h>
using namespace std;
// solution by divyansh  rawat thakur 

int main(){
   int t;
   cin >> t;
   while(t--){ 

        int n;
        cin >> n;
        
        vector<int>a;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);

        }

         if( n == 1) {
            cout << "NO" << endl;
            continue;

         }

         vector<int> b = a;
         sort(b.begin(), b.end());

         bool flag = 1;

         for(int i = 0; i < n; i++){
            if(b[i] != b[0]) flag = 0;
         }

         if(flag == 1) {
            cout << "NO" << endl;
            continue;
         }

         vector<int> derange = b;

         rotate(derange.begin(),derange.end()+1,derange.end());

         for(int i = 0; i < n; i++){
            if(derange[i] == b[i]) {
                swap(derange[i],derange[(i+1) % n]);

            }

            
         }
         cout << "YES" << endl;
         for(int i = 0; i < n; i++){
            cout << derange[i] << " ";

         }
         cout << endl;

        
      
    
   }
   
return 0;

    
} 