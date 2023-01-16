#include <iostream>
using namespace std;

int main() {
    double gross_bill, amount_given, service_charge, sales_tax, net_bill, change;

    cout << "Enter the gross bill: ";
    cin >> gross_bill;

    cout << "Enter the amount given by the customer: ";
    cin >> amount_given;

    service_charge = gross_bill * 0.12;
    sales_tax = gross_bill * 0.07;
    net_bill = gross_bill + service_charge + sales_tax;
    change = amount_given - net_bill;

    cout << "Net bill: $" << net_bill << endl;
    cout << "Change: $" << change << endl;
}
    return 0;