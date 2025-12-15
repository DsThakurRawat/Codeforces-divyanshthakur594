#include<bits/stdc++.h>
using namespace std;
void onetoN(int n){
    if(n ==0) return ;
    onetoN(n-1);

    cout << n << " " << endl;

}
int main(){
    int n;
    cin >> n;
    onetoN( n);

}