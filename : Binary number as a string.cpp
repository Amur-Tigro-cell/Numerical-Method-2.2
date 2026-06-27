#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary = "1011";
    int decimal = 0;

    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }

    cout << "Decimal = " << decimal << endl;
    return 0;
}
