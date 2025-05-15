#include<bits/stdc++.h>
using namespace std;

int main(){
    // number of  distinct character in ones user name is odd--then he is male otherise she is female
    string s;
    cin >> s;
    // so we need to calculate differant leeters in string return yes if even  return no if odd
   set < char > st;
   
   for(char c : s){
    st.insert(c); // set automatically handle duplicates
   }

   if( (st.size() )% 2 ==0 ) cout << "CHAT WITH HER!" << endl;
   else cout << "IGNORE HIM!" << endl;
    
}