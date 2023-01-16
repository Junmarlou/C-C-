#include <iostream>
using namespace std;

int main()
{
int product, n , i;

cout << "Enter a number: ";
cin >> n;

for(i = 1;i <= 10;i++)
{
product = n * i;

cout << n << " x " << i << " = " << product << endl; 
}
    return 0;
}