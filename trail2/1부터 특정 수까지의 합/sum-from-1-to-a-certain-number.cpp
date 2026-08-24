#include <iostream>

using namespace std;

int N;

int hamsu(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }

    return sum/10;
}

int main() {
    cin >> N;

    cout << hamsu(N);

    return 0;
}