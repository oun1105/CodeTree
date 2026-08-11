#include <iostream>
using namespace std;

int main() {
    int a; int b;
    cin >> a >> b;

    int sum = a + b;
    double avg = (double)sum/2;

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}