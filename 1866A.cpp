#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;

   vector<int> v;

   for(int i =0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
   }/*
   // observation or arguements
   // find element which nearest to zero from 
   form -ve side and from +ve side
   for eg if 1 2 3 4 ans will be one operation
   for eg 4 5 6 -2 ans will be 2 operation 
   for eg -1 3 2 4 5 ans wll be 1 operation 
   for eg 0 1 3 5 6 ans will be 0 operation 
   the ultimate goal is a1xa2xa3xa4 = 0;


   */
  int mini = INT_MAX;

  for(int i =0; i < n; i++){
    int absdiff = abs(v[i] - 0);
    mini = min(mini,absdiff);
  }





cout << mini << endl;





   return 0;

    
} 
