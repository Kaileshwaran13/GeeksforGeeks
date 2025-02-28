//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

//User function Template for C++
void utility(string s){
    // length of string is given by s.length()
    // character at any index i is given by s[i]
    for(int i = 0; i < s.size(); i += 2){
        cout << s[i];
    }
}

int main() {	
	int t; 
  cin>>t;
	while(t--){
	    string s; 
      cin>>s; 
      utility(s);
      cout<<endl;
      cout << "~" << "\n";
  }
}
