#include <iostream>
using namespace std;

int main()
{
    int idnumber[10];
    string idname[10];

    for(int i=0; i<10; i++)
    {
         
        cout << "Enter ID number: ";
        cin >> idnumber[i];
        cout << "Enter last name: ";
        cin >> idname[i];
        
    }
    for(int x=0; x<10; x++)
    {
    cout << idnumber[x] << ". " << idname[x] << endl;
    }
    system("pause");
    

    return 0;
}