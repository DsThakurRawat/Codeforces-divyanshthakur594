#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n,k; cin >> n >> k;
    vector<long long > v1(n);
    for( auto &x: v1) cin >> x;
    vector<long long > v2(n);
    for( auto &x: v2) cin >> x;
    // suppose two array are called s-complementary if and only if 
    //ai+bi = s  for all 1<= i <=n;
    // splitting the probelam ito two cases
    // yep one is case 1 where atleast one elemnt is not missing 
    // then we know that requires sum is s = ai+bi for evry 1<=i<=n;
    /*
    we know that bi = s-ai; and also  if <= s-ai<=k does't hold for some index 

    answer is zero 
    */

  int sum = -1;

  for(int i =0; i<n; i++){
    if(v2[i] != -1){
        if( sum== -1 ) sum = v1[i] + v2[i];
        else{
            if(sum != v1[i] + v2[i]){
                cout << 0 << "\n";
                return;
            }


        }
    }
  }




if( sum== -1){
    sort(v1.begin(), v1.end());
    int max = v1[n-1] - v1[0];
    cout << k - max+1 << "\n";
    return ;
}
for(int i =0; i<n; i++){
    if(v1[i] > sum || sum - v1[i] > k){
        cout<<0<<"\n";
        return;
    }


} 
cout << 1 << "\n";








    }
    return 0; 
  

}