#include <iostream>
using namespace std;
void updateVar(int *a);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        updateVar(&a);
        cout << a << "\n";

        cout << "~" << "\n";
    }
    return 0;
}

/* This function is invoked by passing the address of the variable.
    You need to increment the value stored in the variable by 10 */

/* complete the function below */

void updateVar(int *a)
{
    // write your code here
    *a += 10;
}
