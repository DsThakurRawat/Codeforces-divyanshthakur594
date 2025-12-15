#include<bits/stdc++.h>
using namespace std;    
int main(){



/*
               A
             A B A
           A B C B A
         A B C D C B A  
       A B C D E D C B A      







*/





    int n = 5;  // You can change this or take user input

    for (int i = 0; i < n; i++) {
        // 1. Leading spaces
        for (int space = 0; space < n - i - 1; space++) {
            cout << "  ";
        }

        // 2. Increasing characters
        for (int j = 0; j <= i; j++) {
            cout << char(65 + j) << " ";
        }

        // 3. Decreasing characters
        for (int j = i - 1; j >= 0; j--) {
            cout << char(65 + j) << " ";
        }

        cout << endl;
    }

    return 0;
}











