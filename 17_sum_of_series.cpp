#include <iostream>
using namespace std;

double fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    double n;
    cout << "Enter till where the series is intended: ";
    cin >> n;

    double sum = 0.0;
//show

    for (int i = 1; i <= n; i++) {
        sum += i / fact(i);
    }

    cout << "Sum of the series is: " << sum;

    return 0;
}
