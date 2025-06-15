#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   int ans;
   while(t--){ 
    int n,m;
    cin >> n >> m;
    string x,s;
    cin >> x >> s;
     ans=-1;
    
    for(int i = 0; i < 6; i++){
      if(x.find(s) != string::npos){ // this line check wheather s exist inside the x 
        ans = i;
        break;
      
         
         
      }
       x +=x;
    }
    cout<< ((ans != -1) ? ans : -1)<<endl;;
    cout<< endl;
}
  return 0;


    
} 