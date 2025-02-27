// Initial Template for C++
#include <iostream>
using namespace std;

// Function prototype
void swap(int*, int*);
void swap(int&, int&);

// User function Template for C++
// Function to swap A and B
// using reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int A, B;
        cin >> A >> B;
        // Swapping by reference
        swap(A, B);
        cout << A << " " << B << endl;
        cout << "~"
             << "\n";
    }
    return 0;
}
