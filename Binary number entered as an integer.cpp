#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    cin >> binary;

    int decimal = 0, power = 0;

    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, power);
        binary /= 10;
        power++;
    }

    cout << "Decimal = " << decimal << endl;
    return 0;
}
