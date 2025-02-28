#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    int sum = 0;
    sum += n;
    while(n--)
        sum += n;
    cout << sum;
    return 0;
}
