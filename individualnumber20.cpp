#include <iostream>
using namespace std;

int main()
{
    int num[3];
    int sum, ave;

    for(int i = 0; i < 4; i++)
    {
        cout << "Enter a numbers: " << endl;
        cin >> num[i];

        sum = num[0]+num[1]+num[2]+num[3];
        ave = sum / 4;
        
    }

    cout << sum << " / 4 = " << ave;


    return 0;
}