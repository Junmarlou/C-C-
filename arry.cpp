#include <iostream>
using namespace std;

int main()
{
    int n[9];
    
    

    for(int i = 0; i < 10; i++)
    {
        cout << "Enter a number: ";
        cin >> n[i];
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(n[i] > n[j])
            {
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;

            }
        }
    }


    for(int i = 0; i < 10; i++)
    {
        cout << n[i] << ' ';
    }




    return 0;
}