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
    for(int i = 0; i < n; i++){
        int count2 =0;
        if(v[i] == 0){
            count2++;
        }
        count = max(count,count2);
    }
    cout << count << endl;
    

      
   }



      
       
      


   
   return 0;

    
} 