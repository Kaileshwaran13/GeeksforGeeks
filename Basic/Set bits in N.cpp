//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

//User function Template for C++

class Solution {
  public:    
    int setBitCount(int n) {
        return __builtin_popcount(n);
    }
};

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout <<ob.setBitCount(n) << endl;
  cout  << "~" << "\n";
  }
}

