#include <iostream>
using namespace std;

int sum(int a) {
    int total = 0;

    for (int i = 1; i <= a; i++) {
        total = total + i;
    }

    return total;
}

int main() {
    int a;

    cout << "Enter your number: ";
    cin >> a;

    int result = sum(a);

    cout << "Sum = " << result;

    return 0;
}