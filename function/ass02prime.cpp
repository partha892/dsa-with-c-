#include <iostream>
using namespace std;

void prime(int n) {
    if (n <= 1) {
        cout << "non prime";
        return;
    }
    
    bool isprime = true;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isprime = false;
            break;
        }
    }
    
    if (isprime) {
        cout << "prime";
    } else {
        cout << "non prime";
    }
}

int main() {
    prime(6);  // Call prime function with 6
    return 0;
}
