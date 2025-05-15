#include<bits/stdc++.h>
using namespace std;
void havefun(int h , int m){
    cout << (24*60) - (h*60 + m) << endl; 
    
}
int  main(){
    int t;
    cin >> t;
    while(t--){
    int h , m;
    cin >> h >> m;
    havefun(h , m);

}
return 0;
}