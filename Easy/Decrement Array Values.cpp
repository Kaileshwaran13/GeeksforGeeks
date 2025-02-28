// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
int* decrementArrayElements(int arr[], int size) {

    // write your code here
    for(int i = 0; i < size; i++){
        arr[i] -= 1;
    }
    return arr;
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
        int *res;
        res = decrementArrayElements(numbers, n);
        for (int i = 0; i < n; i++) {
            cout << *(res + i) << " ";
        }
        cout << endl;
        cout << "~"
             << "\n";
    }
    return 0;
}
