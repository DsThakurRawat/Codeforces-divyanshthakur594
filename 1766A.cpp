#include<bits/stdc++.h>
using namespace std;

bool check(long long x){
    long long count_digits = 0;
    long long count_zeroes = 0;
    while(x) {
        if( x % 10 == 0) count_zeroes++;
        count_digits++;
        x = x / 10;
    }

    return count_zeroes == count_digits - 1;
}






int main(){
   int t;
   cin >> t;
   // precomputation
   vector < long long > round_numbers;

   for(long long i = 1; i <= 999999; i++){

    if(check(i) == true) round_numbers.push_back(i);




   }











   while(t--){ 

    long long n;
    cin >> n;
    long long answer = 0;

    for(int i = 0; i < round_numbers.size(); i++){
        if(round_numbers[i] <= n) answer++;
        else break;
    }
    cout << answer << endl;
  
    
   }
   
return 0;

    
} 