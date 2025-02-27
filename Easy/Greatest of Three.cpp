//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

//User function Template for C++

int find_greatest_number(int a, int b, int c){
    return max(a,max(b,c));
}
    
int main() {
	int t; 
  cin>>t;
	while(t--){
	    int a, b, c;
	    cin>>a>>b>>c;
      int greatest_number = find_greatest_number(a,b,c);
      cout<<greatest_number<<endl;
      cout << "~" << "\n";
  }
}
