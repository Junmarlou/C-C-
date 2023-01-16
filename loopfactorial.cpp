#include <iostream>
using namespace std;

int main()
{
    int n, i, factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    cout << n << "! = " << factorial;

    return 0;
}