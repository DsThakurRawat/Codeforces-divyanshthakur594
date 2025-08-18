#include<bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin >> t;
   while(t--){ 
    /*

arr = consist of 1 or 2
we need to find element k exist so that
 1 <= k <= n -1
 a1.a2.a3.a4.....ak = ak+1.ak+2.ak+3.ak+4.....an
 if k is multiple then return smallest one
TC - 1:
k = 1
1. yes
2. no
ans = false
k = 2
1. yes 
2. yes 
ans = 2 ---> stisfied 

tc-2
1. should be less than 2 
3. and  a1.a2.a3.a4.....ak = ak+1.ak+2.ak+3.ak+4.....an
for k = 1
1. yes 
2. no
fail

tc - 3
 should less than 3 &&
 a1.a2.a3.a4.....ak = ak+1.ak+2.ak+3.ak+4.....an
 1 yes 

_________
 for testcase 4
 1 2 2 2 1 1 1
  n=  7 
  1<=k <= 6

  for k = 1
  2 = 
  final answe = -1

  for 2 1 1 1
  answer  -1 
  for 1 2 2 2 2 1 1 1 1 


  ##  arg-1 if array has no 2 then answer is one 1 always

  ##  arg-2  if array has odd number of twos then answer is -1 always 


  ## arg-3 if array has even number of 2 then answer is possible 
          1 <= k <= n-1

    for 1 2 2 2 2 1 1 1 1 
    for k = 1 -> no
    for k = 2
    answer k = 2

    for 1 2 1 2 2 1 2 1 1 1 2
    for k = 
    if(1 <= k <= n-1 && )
    










    
    
    
    
    
    
    
    */
   int n;
   cin >> n;
   vector<int>v;

   for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
   }
int count = 0;
int current_count = 0;
   
for(int i = 0; i < n; i++){
    if(v[i] == 2) count++;
    
}

int ans = INT_MAX;

if( count == 0) cout << 1 << endl;
else if(count % 2 != 0) cout << -1 << endl;
else { 

for(int k = 0; k < n; k++){
    if(v[k] == 2) current_count++;

    if((current_count) == (count - current_count) ) {
        ans =  k + 1;
        cout << ans << endl;
        break;
    
    }
    
    
}


}




    
   }

   
return 0;

    
} 