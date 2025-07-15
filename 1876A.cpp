#include<bits/stdc++.h>
using namespace std;
// solution by divyansh 

int main(){
   int t;
   cin >> t;
   while(t--){ 
    int n,p;
       cin >> n >> p;
    vector<int>a(n),b(n);
    for(int i = 0; i < n; i++)cin >> a[i];
    for( int i = 0; i < n; i++) cin >> b[i];
     
    vector<pair<int , int> > residents;

    for(int i = 0; i < n; i++){
        residents[i] = {a[i],b[i]};
    }
    
    sort(residents.begin(),residents.end(),[](auto &x,auto &y){
        return x.second < y.second;
    })



       

      
    
   }
   
return 0;

    
} 