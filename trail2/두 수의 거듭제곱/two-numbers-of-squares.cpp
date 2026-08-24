#include <iostream>

using namespace std;

int a, b;

int square(int a, int b){
    int num = 1;
    for(int i=0; i<b; i++){
        num *= a;
    }

    return num;
}

int main() {
    cin >> a >> b;

    cout << square(a, b);

    return 0;
}