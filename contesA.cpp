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
        bool found = false;

        for(int i =0; i < v.size()-1; i++){
            if(v[i] == v[i+1]) {
                cout << "Yes";
                found = true;
                break;

            }
           
        }


    }
    return 0;
}