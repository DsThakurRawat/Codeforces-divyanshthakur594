#include<bits/stdc++.h>
using namespace std;
// solution by divyansh thakur

int main(){
   int t;
   cin >> t;
   while(t--){ 
       int x;
       cin >> x;
       vector<int>digits;

       while(x > 0){
        int i = x % 10;
        digits.push_back(i);
        x = x/10;

       }

       int miny;

       for(int i =0; i <=x; i++ ){
        if(find(digits.begin(), digits.end(), i) != digits.end()){
            int cur = i;
            miny = min(miny,cur);

        }
       }

       cout << miny << endl;




      
    
   }
   
return 0;

    
} 