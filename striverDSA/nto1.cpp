#include<bits/stdc++.h>
using namespace std;

void printnto1(int n){
    if( n==0) return ; // base condition
    cout << n << " "; // print before recursive call
    printnto1(n - 1); // recursive call

}
int main(){
    int n;
    cin >> n;

    printnto1(n);

}
