#include <bits/stdc++.h>
using namespace std;

//User function Template for C++
int nSum(int n){
    int ans = 0;    
    while(n != 0){
        ans += n;
        n--;
    }
    //Write your code here to calculate and return sum of n number.
    return ans;
}

int main() {	
	int t; cin>>t;
	while(t--) {
        int n;
        cin>>n;
        int ans=nSum(n);
        cout<<ans<<endl;
        cout << "~" << "\n";
    }
}
