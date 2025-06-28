#include<bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin >> t;
   while(t--){ 
    
    /*
    an array is called ugly if it contains at least one element which is equal 
    to the sum of all elements before it. if the array is not ugly it beutiful
     
    [6,3,9,6] is ugly bcz -> 9 = 6 + 3
    [5,5,7] is ugly bcz -> 5 = 5(sum to prev elment)
    [8,4,10,14] 8 != 4 and 10 != 8 + 4 , 14 = 8 + 4 + 10

    prblm statement
    reorder array in such way 
    that the resulted array is beutifull
arguement -- if max and min of arrray is equal or simply put if whole array 
having same number x then ans is no else answer is yes
   
    



    */

    int n ;
    cin >> n;

    vector < int > v;

    for(int i = 0; i < n; i++){
        int x ;
        cin >> x;
        v.push_back(x);

    }

    sort(v.begin(),v.end());

   int max = v[n-1];
   int min = v[0];

   if(max == min ){
    cout << "NO" << endl;
   }
   else {
    cout << "YES" << endl;
    cout << max << " ";
    for(int i = 0; i < n - 1; i++)
        cout << v[i] << " ";
    cout << endl;
       
    
     
   }
    






      
    
   }
   
return 0;

    
} 