#include<bits/stdc++.h>
using namespace std;

   

int main(){
    string s;
    cin >> s;
    
    int n = s.size();
    int count1 =0;
    int count2 =0;
    for(int i =0; i<n; i++){
        if(s[i]=='A'){
            count1++;}
            else if(s[i]=='D'){
                count2++;
            }
        }
        if(count1 > count2){
            cout << "Anton" << endl;
        }
        else if(count2 > count1){
            cout << "Danik" << endl;
        }
        else{
            cout << "Friendship" << endl;
        }
    }       
   
    
