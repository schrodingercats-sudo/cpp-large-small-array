#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}

