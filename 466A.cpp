#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin >> b >> m >> a >> n;
    cout << min({(n*a,(((n+m-1)/m)*b), (n / m) * b + (n % m)* a) })<< endl;

}