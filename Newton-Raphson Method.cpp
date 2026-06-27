#include <iostream>
#include <cmath>
using namespace std;


double f(double x) {
    return x*x*x - x - 2;
}

// Derivative
double df(double x) {
    return 3*x*x - 1;
}

int main() {
    double x0, x1;
    double epsilon = 0.0001;

    cout << "Enter initial guess: ";
    cin >> x0;

    do {
        x1 = x0 - f(x0) / df(x0);

        cout << "x = " << x1 << endl;

        if (fabs(x1 - x0) < epsilon)
            break;

        x0 = x1;

    } while (true);

    cout << "Approximate root = " << x1 << endl;

    return 0;
}
