
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
/*
1
12
123
1234
1234...n

*/
    for(int i =0; i<=n; i++){ // for every row till row n for row 1 printing only 1 for row 2 printing 1 and 2 for row 3 printing till 123 for row 4 printing till 1234
        for(int j =1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}