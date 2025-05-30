#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthElement(vector<int> &a, vector<int> &b, int k)
    {
        a.insert(a.end(), b.begin(), b.end());
        sort(a.begin(), a.end());
        return a[k - 1];
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num)
        {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num)
        {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl
             << "~\n";
    }
    return 0;
}
