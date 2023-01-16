#include <iostream>
using namespace std;

int main() {
    // initialize balance to P20,000.00
    double balance = 20000.00;
    
    while (true) {
        // prompt user for an amount to deposit or withdraw
        cout << "Enter an amount to deposit or withdraw (enter 0 to exit): ";
        double amount;
        cin >> amount;
        
        // exit if sentinel value is entered
        if (amount == 0) {
            break;
        }
        
        // add deposit amount to balance
        if (amount > 0) {
            balance += amount;
            cout << "Deposited P" << amount << ". New balance: P" << balance << endl;
        }
        
        // check if there are sufficient funds before withdrawing
        else {
            if (balance + amount < 0) {
                cout << "INSUFFICIENT FUNDS!" << endl;
            }
            else {
                balance += amount;
                cout << "Withdrew P" << abs(amount) << ". New balance: P" << balance << endl;
            }
        }
    }
    
    return 0;
}