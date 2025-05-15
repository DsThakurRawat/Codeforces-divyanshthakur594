#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 != 0) {
      cout << -1 << endl; 
    } else {
        for (int i = 1; i <= n; i += 2) {
            cout << i + 1 << " " << i << " ";
        }
        cout << endl;
    }
    return 0;
}
