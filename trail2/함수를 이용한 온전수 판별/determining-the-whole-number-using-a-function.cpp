#include <iostream>
using namespace std;
int a, b;

bool isOn(int a, int b, int num){
    int tmp = num;

    if(tmp%2 == 0){
        return false;
    }

    if(tmp == 5 || ((tmp>10) && ((tmp%10) == 5))){
        return false;
    }

    if((tmp%3 == 0) && (tmp%9 != 0)){
        return false;
    }

    else{
        return true;
    }
}

int main() {
    cin >> a >> b;
    int cnt = 0;

    for(int i=a; i<=b; i++){
        if(isOn(a,b,i)){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}