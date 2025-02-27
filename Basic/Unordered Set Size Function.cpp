// Initial Template for C++

// unordered_set::size
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>

using namespace std;

// User function Template for C++

// Complete the function
int sizeMe(unordered_set<string> myset) {   
    return myset.size();
    
}

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        unordered_set<string> myset;
        string line;
        getline(cin, line);
        stringstream ss(line);
        string word;
        while (ss >> word) {
            myset.insert(word);
        }
        cout << sizeMe(myset) << endl;
        cout << "~\n";
    }

    return 0;
}
