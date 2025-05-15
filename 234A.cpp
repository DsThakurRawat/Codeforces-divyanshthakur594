#include<bits/stdc++.h>
using namespace std;

int main() {
    vector < int > arr;
  // this is how can you take input of vector 
  for(int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }


  int count =0;
   sort(arr.begin(), arr.end());
   for(int i =0; i < arr.size()-1; i++){
    if(arr[i] == arr[i+1]) {
      count++;
    }
   }
  cout << count << endl;

  }