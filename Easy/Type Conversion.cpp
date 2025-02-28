// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
int typeCast(double d)
{

    // code here
    return int(d);
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        double d;
        cin >> d;

        int answer = typeCast(d);

        cout << answer << endl;

        cout << "~" << "\n";
    }
}
