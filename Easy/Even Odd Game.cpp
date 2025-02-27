// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

string utility(int n) {

    if(n % 2 == 0)
        return "Friend";
    else
        return "You";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int number;
        cin >> number;
        cout << utility(number);
        cout << endl;

        cout << "~"
             << "\n";
    }
}
