#include <iostream>
using namespace std;

int main()
{
    int n, s, i, first = 1, second = 1, next = 0;

    cout << "Enter how many sequence: ";
    cin >> s;
    
    
    for(i = 1; i <= s; i++)
    {
        if(i == 1)
        {
            cout << first << ", ";
            continue;
        }
        if(i == 2)
        {
            cout << second << ", ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;
       
        cout << next << ", ";
    }
    
    

    return 0;
}