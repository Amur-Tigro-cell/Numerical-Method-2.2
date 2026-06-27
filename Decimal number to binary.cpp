#include <iostream>
using namespace std;

int main() {
    int decimal;
    cin >> decimal;

    if (decimal == 0) {
        cout << "Binary = 0";
        return 0;
    }

    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    cout << "Binary = ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }

    return 0;
}
