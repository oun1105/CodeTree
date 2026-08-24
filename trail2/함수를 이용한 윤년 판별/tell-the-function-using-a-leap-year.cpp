#include <iostream>
using namespace std;
int y;

bool YoonYear(int y){
    if(y%4 != 0){
        return false;
    }
    if((y%100 == 0) && (y%400 != 0)){
        return false;
    }

    return true;
}

int main() {
    cin >> y;

    if(YoonYear(y)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}