#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 

    int n;
    cin >> n;
    
/*


a^a = 0
a^0 = a
exp = a1^x^a2^x......an^x;
exp = a1^a2^a3^.......x^x^x; // modified expression

#case - 1
n is even 
a1^a^...^an  
x^x^x^....even no of element

means that when n is even x^x^x...^x^x = 0
sub-case -> 1
if a1^a2^....^an==0
print(any random x in this case)

sub-case -> 2:
if a1^a2^.....^an !=0
then print -1;

# case -2 :
when n is odd  
u will left one more x will remain 

ur expression willl be depended of x
a1^a2^+......an^x=0



















*/

long long n;
cin >> n;

long long a[n];

for(int i =0; i < n; i++) cin >> a[i];

long long total_xor = 0;

for(int i = 0; i < n; i++)
  total_xor ^=a[i];
  if( n % 2 ==1 ) cout << total_xor << endl;
  else{ 
    if(total_xor == 0) cout << total_xor << endl;
    else cout << -1 << endl;
  }





















      
   }



      
       
      


   
   return 0;

    
} 