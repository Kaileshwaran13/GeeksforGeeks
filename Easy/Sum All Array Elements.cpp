// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

int arraySum(int arr[], int size) {
    // Just return the sum of the list
    // Don't print here
    int sum = 0;
    for(int i = 0 ; i < size; i++)
        sum += arr[i];
    return sum;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int numbers[n];
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }
        cout << arraySum(numbers, n) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
