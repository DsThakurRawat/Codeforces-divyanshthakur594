#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
   cin >> n >> k >> l >> c >> d >> p >> nl >> np;
   cout << min(min(k * l / (n * nl), c * d / n), p / (n * np)) << endl;

    

}
/*total available resources = 
totaldrink = k xl
total lime slice = c x d
total slat ing gms = p

*/
/*
each toast for n friends needed
. n x nl ml of drink 
. n lime of slice will needed
. n x np gm of salt
maximum number of  toast 
from  drinks = k *l / n *n*l
from slices = c*d/ n 
from salt = p / n*n*p

*/