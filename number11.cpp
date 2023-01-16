#include <iostream>
using namespace std;

int main()
{
    int i, n, j;

    for(i = 1; i <= 100; i++ )
    {
        if(i % 2==0)
        {           
        cout << i << "  ";
        if(i % 20 == 0)
        {
            cout << "\n";
        }
        }     
    }
    return 0;
}