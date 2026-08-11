#include <iostream>
using namespace std;

int main() {
    int weight = 13;
    double G = 0.165;

    cout << fixed;
    cout.precision(6);

    cout << weight << " * " << G << " = " << weight * G;
    return 0;
}