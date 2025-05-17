#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int > v;
        for(int i =0; i<n; i++){
             v.push_back(v[i]);

        }

        for(int i =0; i < v.size()-1; i++){
            if(v[i] == v[i+1]) {
                cout << "Yes"

            }
        }

    }
}