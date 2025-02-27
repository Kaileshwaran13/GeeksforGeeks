// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
int posAverage(int arr[], int size) {
int sum = 0, cnt = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] >= 0){
            sum += arr[i];
            cnt++;
        }
    }
    return sum / cnt;
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
        int avg = posAverage(numbers, n);
        cout << avg << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
