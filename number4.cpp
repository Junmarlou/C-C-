#include <iostream>
using namespace std;

int main()
{
    int old_salary, new_salary, retroactive_pay, n;

    cout << "Please enter your old salary: ";
    cin >> old_salary;
    
    n = old_salary * 0.1775;
    new_salary = old_salary + n;
    retroactive_pay = new_salary * 2;

    cout << "Your old salary is " << old_salary << endl;
    cout << "Your new salary is " << new_salary << endl;
    cout << "Your retroactive pay for 2 months is " << retroactive_pay;

    return 0;
}