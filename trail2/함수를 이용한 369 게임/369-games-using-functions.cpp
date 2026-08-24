#include <iostream>
using namespace std;
int a, b;

bool check369(int a, int b, int alpha){
    while(alpha>0){
        if((alpha%10==3) || (alpha%10==6) || (alpha%10==9) || (alpha/10 == 3) || (alpha/10 == 6) || (alpha/10 == 9)){
            return true;
        }
        else{
            alpha /= 10;
        }
    }
    return false;
}

bool Mult3(int a, int b, int alpha){
    return (alpha%3 == 0);
}

int main() {
    cin >> a >> b;
    int cnt = 0;
    int cntMult = 0;
    int cntCheck = 0;

    for(int i=a; i<=b; i++){
        if(Mult3(a,b,i)){
            cntMult++;
        }

        if(check369(a,b,i)){
            cntCheck++;

        }

        if(check369(a,b,i) || Mult3(a,b,i)){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}