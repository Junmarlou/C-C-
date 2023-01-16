#include <iostream>
using namespace std;

int main() {
    int W, X, Y, Z;

    // Read in four numbers
    cout << "Enter the value of W: ";
    cin >> W;
    cout << "Enter the value of X: ";
    cin >> X;
    cout << "Enter the value of Y: ";
    cin >> Y;
    cout << "Enter the value of Z: ";
    cin >> Z;

    // Exchange the values of the variables
    int temp = W;
    W = Z;
    Z = temp;
    temp = X;
    X = Y;
    Y = temp;

    // Output the new values of the variables
    cout << "W = " << W << endl;
    cout << "X = " << X << endl;
    cout << "Y = " << Y << endl;
    cout << "Z = " << Z << endl;

    return 0;
}