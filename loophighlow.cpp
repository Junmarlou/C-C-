#include <iostream>
using namespace std;

int main()
{
    int n, i, highest, lowest;

    cout << "Enter 10 numbers: " << endl;
    
    cin >> n;
    highest = n;
    lowest = n;


    for(i = 0; i < 9; i++)
    {
        cin >> n;
        
        if(n > highest)
        {
            highest = n;
        }
        if(n < lowest)
        {
            lowest = n;
        }
        
        
    }

    cout << "The highest number is " << highest << endl;
    cout << "The lowest number is " << lowest << endl;

    return 0;
}