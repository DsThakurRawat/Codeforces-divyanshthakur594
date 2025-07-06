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

          int index = -1;
        
        for(int i = 1; i < n; i++){
            if(a[i] != a[0]) 
            {  index = i;
                break;

            }
        }

        if(index == -1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << a[0] << " " << a[index] << endl;
        }
        
         

        

    
       
       
      
    
   }
   
return 0;

    
} 