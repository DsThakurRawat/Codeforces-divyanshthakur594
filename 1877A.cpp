#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
    int n; // number  of teams

    vector<int>v;
    /*
    approach and important facts
    eff = goal by team - goal by opposition;
    # they have given n-1 integers {a1,a2,a3,a(n-1)}
    {t1 , t3} = {5,2}

    t1-> t2
         t3
         t4
         (s1 + s2+ s3) -[s1' + s2' + s3'] = a1
         arg :
         the answer is simply  -ve of sum of all the n-1 efficiency


    */
   int sum = 0;
    for(int i =0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;

    }






  cout << -sum << endl;





      






      
       
      


   }
   return 0;

    
} 