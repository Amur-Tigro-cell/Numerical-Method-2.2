#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of data points: ";
    cin >> n;

    double x[20], y[20][20], value;

    cout << "Enter x and y values:\n";
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i][0];
    }

    
    for (int j = 1; j < n; j++) {
        for (int i = n - 1; i >= j; i--) {
            y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
        }
    }

    cout << "Enter interpolation value: ";
    cin >> value;

    double h = x[1] - x[0];
    double p = (value - x[n - 1]) / h;

    double result = y[n - 1][0];
    double term = 1;

    for (int i = 1; i < n; i++) {
        term = term * (p + (i - 1)) / i;
        result += term * y[n - 1][i];
    }

    cout << "Interpolated value = " << result << endl;

    return 0;
}
