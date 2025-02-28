//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

//User function Template for C++
int fibonacci(int n){
        
    int num1 = 1, num2 = 1, temp = 0;
    n -= 2;
    while(n--){
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
    }
    return temp;
        
}
    
int main() {
	int t; 
  cin>>t;
  while(t--){
	    int n; 
      cin>>n;
      int ans = fibonacci(n);
      cout<<ans<<endl;
	    cout << "~" << "\n";
  }
}
