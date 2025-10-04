#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 

      // 4 2 3 5 
      // 4 5 2 3
       int n ;
       cin >> n;
       int a[n];
       for(int i = 0; i < n; i++) cin >> a[i];

       /*
       a = a1  
       arg if n is even ans is 2
       if n is odd no of operation is actaully 4 

       */
      if (n % 2 == 0) // If n is even
		{
			cout << 2 << endl; // Output the number of operations
			cout << 1 << " " << n << endl; // Perform operation on the entire array
			cout << 1 << " " << n << endl; // Repeat the operation
		}
		else // If n is odd
		{
			cout << 4 << endl; // Output the number of operations
			cout << 1 << " " << n - 1 << endl; // Perform operation on the first n-1 elements
			cout << 1 << " " << n - 1 << endl; // Repeat the operation
			cout << n - 1 << " " << n << endl; // Perform operation on the last two elements
			cout << n - 1 << " " << n << endl; // Repeat the operation
		}
       





      
       
      


   }
   return 0;

    
} 