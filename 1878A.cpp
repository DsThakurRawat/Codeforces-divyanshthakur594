#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
    // if k is present in the array anywhere answer is yes
    // if u take even single element  1->sized subarray that is a subsegment
    //
    int n,k;
    cin >> n >> k;
    vector < int > v;
    for(int i =0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
   int flag = 0;

    for(int i =0; i < n; i++){
        if( k == v[i]) {
            flag = 1;
            break;
    
    }
}
 

 cout << ((flag != 0) ? "YES" : "NO") << endl;

   }
   return 0;

    
} 