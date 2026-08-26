#include <iostream>
using namespace std;
int a, b;
int cnt = 0;

void check(int a, int b, int num){
    bool Prime = true;
    bool Cond = false;

    for(int k=2; k<num; k++){
        if(num%k == 0){
            Prime = false;
        }
    }

    if(num<10 && (num%2 == 0)){
        Cond = true;
    }
    else if(num>10 && (((num/10)+(num%10)) % 2 == 0)){
        Cond = true;
    }

    if(Prime ==  true && Cond == true){
        cnt++;
    }
}

int main() {
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        check(a,b,i);
    }

    cout << cnt;
    return 0;
}