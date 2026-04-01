#include <iostream>
using namespace std;

void reverseString(string &str, int start, int end) {
    if (start >= end)
        return;

    swap(str[start], str[end]);

    reverseString(str, start + 1, end - 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    reverseString(input, 0, input.length() - 1);

    cout << "Reversed string: " << input << endl;

    return 0;
}