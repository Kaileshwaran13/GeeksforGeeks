// Initial Template for C++
#include <iostream>
using namespace std;

// User function Template for C++
/* Function to take input for 2D array elements
 * Note : Mention matrix in argument also.
 * N : size of matrix
 */
void twoDimensional(int **mat, int N) {
    // Loop to iterate through matrix
    // and print all the matrix elements row wise
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }
}

// Driver code
int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int N;
        cin >> N;
        // Declaring mat as pointer to pointer
        int **mat;
        // mat pointer contains array of pointer to array
        mat = new int *[N];
        // Taking input to mat[][]
        for (int i = 0; i < N; i++) {
            mat[i] = new int[N];
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> mat[i][j];
            }
        }
        twoDimensional(mat, N);
        cout << "~"
             << "\n";
    }
    return 0;
}
