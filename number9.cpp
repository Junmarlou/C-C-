#include <iostream>
using namespace std;

int main()
{
    float height;
    int age;
    char citizen;
    char recommendee;

    cout << "Enter 'R' is you're a recommendee from Jedi Master Obi Wan, Enter 'N' if not: ";
    cin >> recommendee;
    cout << "Enter your height in cm: ";
    cin >> height;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter 'C' if you're a citizen of Endor, Enter 'N' if you're not a citizen of Endor: ";
    cin >> citizen;
    

    
     if(recommendee = 'N')
    {
        if(height < 200)
        {
            if(age  >= 21)
            {
                if(citizen = 'C')
                {
                    cout << "You're accepted";
                }
                else if(citizen = 'N')
                {
                    cout << "You're rejected";
                }
            }
            else if(age <= 25)
            {
                cout << "You're rejected";
            }
        }
        else if(height >200)
        {
            cout << "You're rejected";
        }
    }

    if(recommendee = 'R')
    {
        cout << "Congrastulation! You're accepted to Jedi Knight Military Academy.";
    }

       
    return 0;
}