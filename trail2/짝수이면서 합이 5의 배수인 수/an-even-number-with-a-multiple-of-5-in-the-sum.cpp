#include <iostream>

using namespace std;

int n;

bool isRight(int n){
    return ((n%2==0) && ((((n/10)+(n%10))%5) == 0));
}

int main() {
    cin >> n;
    if(isRight(n)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}