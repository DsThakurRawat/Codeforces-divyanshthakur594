#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        // two possible case 
        // if sorted return always yes
        // if k = 1 ( array unsorted )  no 
        // if K > 1   yes
        vector<int> v(n);

        for(int i =0; i<n; i++) cin >> v[i];

        vector<int> v1 = v;
        sort(v1.begin(),v1.end());

        if( v1 == v || k > 1) cout << "YES" << endl;
        else cout<< "NO" << endl;
        






    }

   
    return 0;
}