#include <iostream>
using namespace std;

int main()
{
    int nsat_score, parent_salary, exam_score, ave, n;

    cout << "Enter your parents salary: ";
    cin >> parent_salary;
    cout << "Enter your NSAT score: ";
    cin >> nsat_score;
    cout << "Enter your entrace exam score: ";
    cin >> exam_score;

    n = nsat_score + exam_score;
        ave = n / 2;

    if(parent_salary <= 3500 )
    {
        if(ave >= 91)
        {
            cout << "Congratulation! You're accepted as a scholar";
        }
        else if(ave < 91)
        {
        cout << "Sorry to inform you that you're rejected for being a scholar";
        }

    }

    else
    {
        cout << "Sorry to inform you, but you're rejected for being a scholar";
    }

    return 0;
}