#include <iostream>
using namespace std;

int main()
{
int TestScores[] = {90, 88, 78, 80, 91, 75};
int NumberofElements = sizeof(TestScores) / sizeof(TestScores[0]);

for (int i = 0; i < NumberofElements; i++){
    cout << TestScores[i] << endl;
}

    return 0;
}