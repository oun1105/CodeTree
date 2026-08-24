#include <iostream>
using namespace std;
int n, m;

int PrintGCD(int n, int m){
    int arrN[101] = {};
    int arrM[101] = {};

    int cntN=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            arrN[cntN] =(n/i);
            cntN++;
        }
    }

    int cntM=0;
    for(int i=1; i<=m; i++){
        if(m%i==0){
            arrM[cntM] = (m/i);
            cntM++;
        }
    }

    for(int i=0; i<cntN; i++){
        for(int j=0; j<cntM; j++){
            if(arrN[i] == arrM[j]){
                return arrM[j];
            }
        }
    }
}

int main() {
    cin >> n >> m;

    cout << PrintGCD(n, m);

    return 0;
}