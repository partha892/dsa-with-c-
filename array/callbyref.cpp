#include <iostream>
using namespace std;

// Function to swap two numbers using call by reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    // Call the function
    swap(x, y); 

    cout << "After swapping: x = " << x << ", y = " << y << endl;
    //

    return 0;
}
