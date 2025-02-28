#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    string isVowel(char c){
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return "YES";
        else
            return "NO";
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
        cout << "~" << "\n";
    }
    return 0; 
} 
