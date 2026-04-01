#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0)   // base case
        return 0;
    return (n % 10) + sum(n / 10);  // recursive step
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits of " << num << " is "<< sum(num) << endl;

    return 0;
}