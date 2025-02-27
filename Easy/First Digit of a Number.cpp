//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

//User function Template for C++

// Complete the function
int firstDigit(int n){
    while(n >= 10)
        n /= 10;
    return n;
}

int main() {	
	int t; 
  cin>>t;
	while(t--){
	    int n; 
      cin>>n;   
      int answer = firstDigit(n);
      cout<<(answer)<<endl;
  cout << "~" << "\n";
  }  
}
