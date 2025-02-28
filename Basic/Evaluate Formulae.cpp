// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
void evalute(int a, int b, int c, int d) {
    // Complete the code above that stores the output of the expression
    int res = ((a + b) / c) + d;
    // Complete the code above that stores the output of the expression
    // This prints the output. Don't change it!
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        evalute(a, b, c, d);
        cout << "~"
             << "\n";
    }
}
