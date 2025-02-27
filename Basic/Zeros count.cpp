// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countZeroes(int arr[], int n) {
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0)
                cnt++;
        }
        return cnt;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int arr[100001];
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number, size = 0;
        while (ss >> number) {
            arr[size++] = number;
        }

        Solution ob;
        cout << ob.countZeroes(arr, size) << endl;
        cout << "~\n";
    }

    return 0;
}
