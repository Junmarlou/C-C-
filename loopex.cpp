#include <iostream>
using namespace std;

int main()
{
    int sum, n;
    
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
         sum = sum + i;
        
    }
     cout << sum << endl;

    return 0;
}