#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        if (n == 1) {
            cout << "NO" << endl;
            continue;
        }

        vector<int> b = a;
        sort(b.begin(), b.end());

        bool allSame = 1;
        for (int i = 1; i < n; ++i) 
        {
            if (b[i] != b[0])
             {
                allSame = 0;
                break;
            }
        }
        if (allSame) {
            cout << "NO" << endl;
            continue;
        }

        vector<int> deranged = b;
        rotate(deranged.begin(), deranged.begin() + 1, deranged.end());

        
        for (int i = 0; i < n; i++) 
        {
            if (deranged[i] == b[i]) 
            {
                

                if (i + 1 < n) {
                    swap(deranged[i], deranged[i + 1]);
                } else {
                    swap(deranged[i], deranged[i - 1]);
                   }
                  }
               }

       
        for (int i = 0; i < n; i++) 
        {
            if (deranged[i] == b[i]) {
                for (int j = i + 1; j < n; j++)
                 {
                    if (deranged[j] != b[i] && deranged[i] != b[j])
                     {
                        swap(deranged[i], deranged[j]);
                        break;
                    }
            }
         }
    }

        bool flag = 1;
        for (int i = 0; i < n; i++) {
            if (deranged[i] == b[i]) {
                flag = 0;
                break;
            }
        }

        if (!flag) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << n << endl;
            for (int x : deranged) cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}
