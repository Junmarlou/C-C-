#include <iostream>
using namespace std;

int main()
{
    int grosspay, i, n, hour, rate;

    cout << "Gross Pay(Php)  With holding(%)"<< endl <<  "0 t0 2000           -10%" << endl << "2001 to 4000        -12%" << endl << "4001 to 10000       -15%" << endl << "10001 and over      -20%"<<endl;
    cout << "Input hour/s: ";
    cin >> hour;
    cout << "Input rate: ";
    cin >> rate;

    grosspay = hour * rate;

    if (grosspay >= 0 && grosspay <= 2000)
        {
           n = grosspay * 0.10;
           i = grosspay - n;
           cout << "Your salary is " << i;

        }

    if (grosspay >= 2001 && grosspay <= 4000)
    {
           n = grosspay * 0.12;
           i = grosspay - n;
           cout << "Your salary is " << i;

        }
    if (grosspay >= 4001 && grosspay <= 10000)
    {
           n = grosspay * 0.15;
           i = grosspay - n;
           cout << "Your salary is " << i;
    }
if (grosspay >= 10001)
    {
           n = grosspay * 0.20;
           i = grosspay - n;
           cout << "Your salary is " << i;
    }
    return 0;
}