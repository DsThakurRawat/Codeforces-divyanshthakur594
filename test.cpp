#include<bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin >> t;
   while(t--){ 
      
      /*
      a -- array of +ve integer good if gcd of all element in a is no more than its lenght
       arr-> good  = gcd(elements) < n(n is length of array)
       and for  array of atleast 2 +ve integers it is beutiful iff all of its prefixes whose length is no less than 2 are good



  arr = [3,6] -> is not good bcz gcd = 3  and n = 2 as length is less than gcd
  arr = [1,2,4] is both good and beutiful bcz all of its prefixes whose length is no less than
  2 which are 
      3,6 -> no
      1 2 4 -> 

      a = {a1, a2, a3, a4, a5 , a6,.......an}
      reorder these elements
      beutiful array = 
      beutiful Array = 
      prefix length >= 2
      {a1,a2} -> 2 gcd od arr <=2

      {a1,a2,a3} -3 gcd of arr < 3
      {a1,a2,a3,a4}-4 gcd of arr < 4
      f
      
      




      */

   long long n;
   cin >> n;
   vector < long long > a(n);

   for(int i = 0; i < n; i++){
      cin >> a[i];
   }
   int flag = 0;
   for(int i = 0; i < n; i++ ){
      for(int j = i+1; j < n; j++){
         if(__gcd(a[i],a[j]) <= 2) flag = 1;
      }
   }

   if(flag = 0)
    cout << "NO" << endl;
    else cout << "YES" << endl;







    
   }

   
return 0;

    
} 