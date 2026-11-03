#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int aa=0; aa<n; aa++){
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
