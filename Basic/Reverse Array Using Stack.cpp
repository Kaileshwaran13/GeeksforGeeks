#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

// Complete this function
class Solution {
  public:
    void reverseArray(vector<int>& arr) {
        stack<int> stk;
        for(int i = 0; i < arr.size(); i++){
            stk.push(arr[i]);
        }
        for(int i = 0; i < arr.size(); i++){
            arr[i] = stk.top();
            stk.pop();
        }
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution obj;
        obj.reverseArray(arr);

        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
        cout << "~\n";
    }
    return 0;
}
