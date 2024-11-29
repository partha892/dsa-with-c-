#include <iostream>
#include <string>
using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary; // Add remainder to the binary string
        decimal /= 2; // Divide the number by 2
    }
    return binary.empty() ? "0" : binary; // Return "0" if input is 0
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    string binary = decimalToBinary(decimal);
    cout << "Binary equivalent: " << binary << endl;

    return 0;
}
