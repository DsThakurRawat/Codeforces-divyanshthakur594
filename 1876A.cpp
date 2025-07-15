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
     
    vector<pair<int , int> > residents(N);

    for(int i = 0; i < n; i++){
        residents[i] = {a[i],b[i]};
    }
    
    sort(residents.begin(),residents.end(),[](auto &x,auto &y){
        return x.second < y.second;
    });

    long long total_cost = 0;
    int people_left = n;

    for(auto [ai, bi] : residents){
        if(people_left == 0) break;
        int take = min(ai,people_left);
        int cost_per = min(bi,p);
        total_cost += 1LL*take*cost_per;
        people_left -= take;
    }
   cout << total_cost << endl;


       

      
    
   }
   
return 0;

    
} 