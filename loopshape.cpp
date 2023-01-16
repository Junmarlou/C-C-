#include <iostream>
using namespace std;

int main()
{
    int i, j;
    //INCREASING 
    for(i = 1; i <= 5; i++) //outer loop = rows
    {
        for(j = 1; j <= i; j++) //inner loop = column
        {
            cout << "* "; //output prints
        }
        cout << "\n";

    }

    cout << "\n";
    //SQUARE
    int n = 5;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << "\n";

    }

    cout << "\n";
    //DECREASING
    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for(j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n";

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for(j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    
    cout << "\n";


    return 0;
}