#include<bits/stdc++.h>
using namespace std;    
int main(){

    int t; 
    cin >> t;
    while(t--){

      long long n,k;
      cin >> n >>k;
      vector<long long > a(n);
      long long max_val=0;

      for(int i =0; i<n; i++){
        cin >> a[i];
        max_val =  max(max_val,a[i]);
      }
    long long target_min = max_val-k;
    long long total_moves =0;

    for(int i =0; i<n; i++){
        if(a[i] > target_min) total_moves += (a[i] - target_min);

    } 
    if(total_moves % 2 == 1 ) cout << "Tom\n";
    else cout<< "Jerry\n";



    }
    return 0;

}