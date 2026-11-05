#include <iostream>
#include<vector>

using namespace std;

int n;
int arr[100000];

int getDigit(int num, int pos, int k){
    int divisor = 1;
    for(int i=0; i<k-1-pos; i++){
        divisor *= 10;
    }
    return (num/divisor)%10;
}

void radixSort(int k){
    for(int pos = k-1; pos>=0; pos--){
        vector<vector<int>> arrNew(10);

        for(int i=0; i<n; i++){
            int digit = getDigit(arr[i], pos, k);
            arrNew[digit].push_back(arr[i]);
        }

        int idx = 0;
        for(int i=0; i<10; i++){
            for(size_t j = 0; j < arrNew[i].size(); j++){
                arr[idx++] = arrNew[i][j];
            }
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > maxVal) maxVal = arr[i];
    }
    int k=1;
    while(maxVal >= 10){
        maxVal /= 10;
        k++;
    }

    radixSort(k);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
