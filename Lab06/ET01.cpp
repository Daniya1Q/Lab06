
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Input the value for nth term: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double term = pow(1.0 / i, i);
        sum += term;
        cout << "1/" << i << "^" << i << " = " << term << endl;
    }

    cout << "The sum of the above series is: " << sum << endl;

    return 0;
}
