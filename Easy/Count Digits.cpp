// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

int countDigits(int n) {
    int cnt = 0;
    while (n >= 10){
        n /= 10;
        cnt++;
    }
    return cnt + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << countDigits(n);
        cout << endl;
        cout << "~"
             << "\n";
    }
}
