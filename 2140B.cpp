
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   
    int x ; cin >> x;
    /*
            Let's assume that the number y
            has d(>0)
            digits.

            Now we try to express the number x#y
            in an algebraic form.

            x#y=x⋅10d+y=x⋅(10d−1)+(x+y)
            .

            For x#y
            to be divisible by x+y
            , we have that x+y
            must be a factor of x⋅(10d−1)
            .

            Now that we know d>0
            , we can surely say that the number 3⋅x
            is a factor of x⋅(10d−1)
            . Thus, if we make x+y=3⋅x
            , the condition is satisfied.

            So, we can just choose y
            to be equal to 2⋅x.


    
    
    
    */



    cout << 2*x << endl;

  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
