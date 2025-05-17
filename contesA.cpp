#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int > v(n);
        for(int i =0; i<n; i++){
             cin >> v[i];

        }
        bool found = 1;

        for(int i =0; i < v.size()-1; i++){
            if(v[i] == v[i+1]) {
                
                found = 0;
                break;

            }
           
        }
        if(found == 0) cout << "Yes" << endl;
        else 
        
      

    }
    return 0;
}