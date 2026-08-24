#include <iostream>
#include <algorithm>
using namespace std;
int n, m;

int findLCM(int n, int m){
    int LCM = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(n*j == m*i){
                return n*j;
            }
        }
    }
}

int main() {
    cin >> n >> m;

    cout << findLCM(n, m);

    return 0;
}