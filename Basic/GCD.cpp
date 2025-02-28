// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
int gcd(int a, int b) {
    // code here to calculate and return gcd of a and b
    return __gcd(a,b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        int ans = gcd(A, B);
        cout << ans << endl;
        cout << "~" << "\n";
    }
}
