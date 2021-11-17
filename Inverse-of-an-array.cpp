#include <iostream>
#include<cmath>
using namespace std;
int main() {

    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        int diff = abs(i - arr[i]);

        swap(arr[diff], arr[i]);
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

}
