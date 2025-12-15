#include <iostream>
using namespace std;

void print22(int n) {
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << n - min(min(top, down), min(left, right)) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
        int n;
        cin >> n;
        print22(n);
    }
   