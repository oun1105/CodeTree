#include <iostream>
using namespace std;

int main() {
    int aM, aE, bM, bE;
    cin >> aM >> aE;
    cin >> bM >> bE;


    if((aM > bM) && (aE > bE)){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}