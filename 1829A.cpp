#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
    int n;
    cin >> n;
    vector < int > v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);


    }

    int count =0;
    int maxi=0;
    for(int i = 0; i < n; i++){
        if(v[i] == 0) count++;
        if(v[i] == 1) count =0;
       
       
        maxi = max(count,maxi);
    }
    cout << count << endl;
    

      
   }



      
       
      


   
   return 0;

    
} 