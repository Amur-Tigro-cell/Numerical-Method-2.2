#include <iostream>
#include <cmath>
using namespace std;


double f(double x) {
    return x*x*x - x - 2;
}

int main() {
    double a, b, c;
    double epsilon = 0.0001;

    cout << "Enter interval [a b]: ";
    cin >> a >> b;

    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval. Root does not lie in the interval.";
        return 0;
    }

    do {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if (f(c) == 0.0)
            break;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;

    } while (fabs(f(c)) > epsilon);

    cout << "Approximate root = " << c << endl;

    return 0;
}
