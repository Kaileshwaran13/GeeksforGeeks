#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binaryToDecimal(string &b) {
        int value = 0;
        reverse(b.begin(), b.end());
        for(int i = 1; i < b.size(); i++){
            if(b[i] == '1')
                value += pow(2,i);
        }
        if(b[0] == '1')
            value += 1;
        return value;
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binaryToDecimal(str);
        cout << ans << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
