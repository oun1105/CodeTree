#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c;

int hamsu(int a, int b, int c){
    return (min(min(a,b),c));
}

int main() {
    cin >> a >> b >> c;

    cout << hamsu(a,b,c);

    return 0;
}