#include <iostream>

int main() {
    int num1, num2, num3;

    // Read in three numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;

    // Output the numbers
    std::cout << "number 1 = " << num1 << std::endl;
    std::cout << "number 2 = " << num2 << std::endl;
    std::cout << "number 3 = " << num3 << std::endl;

    // Use the conditional ?: operator to find the highest number
    int highest = (num1 > num2) ? num1 : num2;
    highest = (highest > num3) ? highest : num3;

    // Output the highest number
    std::cout << "The highest number is = " << highest << std::endl;

    return 0;
}