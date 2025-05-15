#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    string s;
    vector<string> strings(n);//vector<string> strings(n); → Creates a vector of strings with size n. This will store the n strings the user inputs.


    unordered_map<string, int> freq;
    /*unordered_map<string, int> freq; → Creates a hash map (unordered map) where:

The key is a string (e.g., "A", "ABC").

The value is an integer that stores how many times each string appears.

*/



    string maxstr; //string maxstr; → This will store the string that appears the most times.
    /*int maxfreq=0; → This will store the maximum frequency of any string. It is initialized to 0.
    */
    // Loop to read n strings and count their frequencies
    int maxfreq=0;
    for (int i = 0; i < n; i++){
        cin >> strings[i]; // Read each string into the vector
        freq[strings[i]]++;// Increment the frequency of the string
        
        // Check if the current string has a higher frequency
        if (freq[strings[i]] > maxfreq) {
            maxfreq = freq[strings[i]];
            maxstr = strings[i];
        }


    }
    cout << maxstr << endl; // Output the string with the highest frequency
    
   
}