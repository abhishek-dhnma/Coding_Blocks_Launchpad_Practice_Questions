#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }
    int Q;
    cin >> Q;

    int b = arr[n - 1];

    //while(Q > 0){
    for (int i = 0; i < n; i++) {

        arr[i] += arr[i - 1];

    }


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}
