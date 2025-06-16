#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
       int num[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    int N = 10;
      char mat[N][N];
    int score=0;

 for (int i = 0; i < N; ++i) {
            string line;
            cin >> line;
            for (int j = 0; j < N; ++j) {
                mat[i][j] = line[j];
            }
        }

         for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (mat[i][j] == 'X') {
                    score += num[i][j];
                }
            }
        }






      



 cout << score << endl;
      
       
      


   }
   return 0;
}

    