//Can you convert a decimal number to binary?
#include <iostream>

int main() {
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;
    if (decimalNumber < 0) {
        std::cout << "Please enter a non-negative decimal number." << std::endl;
        return 1;
    }
    if (decimalNumber == 0) {
        std::cout << "Binary representation: 0" << std::endl;
        return 0;
    }
    int maxBitPosition = 0;
    int tempNumber = decimalNumber;
    while (tempNumber > 0) {
        tempNumber /= 2;
        maxBitPosition++;
    }
    std::cout << "Binary representation: ";
    for (int i = maxBitPosition - 1; i >= 0; --i) {
        int bit = (decimalNumber >> i) & 1;
        std::cout << bit;
    }

    std::cout << std::endl;

    return 0;
}
