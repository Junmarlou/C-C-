#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3,sum,ave;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;

    sum = num1 + num2 + num3;
    ave = sum / 3;

    cout << "The average is = " << ave;


    return 0;
}