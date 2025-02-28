//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

//User function Template for C++
int LCM(int a, int b){
    //write your code here
    //return LCM of a and b
    return (a / gcd(a, b)) * b;    
}

int main() {
	int t; 
  cin>>t;
  while(t--){
	    int a, b;
      cin>>a>>b;
      cout<<LCM(a, b)<<endl;
      cout << "~" << "\n";
    }
}
