// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
// Complete this function

bool sExists(set<int> s, int x) {
    return s.find(x) != s.end();
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        set<int> s;
        string line, line2;
        getline(cin, line);
        getline(cin, line2);
        stringstream ss(line);
        stringstream ss1(line2);
        int num, x;
        while (ss >> num) {
            s.insert(num);
        }
        while (ss1 >> num) {
            x = num;
        }
        if (sExists(s, x))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~\n";
    }
    return 0;
}
