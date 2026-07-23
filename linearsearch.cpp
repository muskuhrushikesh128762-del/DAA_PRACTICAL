#include <iostream>
using namespace std;

int main() {
    int arr[] = {22, 54, 23, 87, 46, 99};
    int target = 99;

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (target == arr[i]) {
            cout << "Element found at index: " << i;
            return 0;
        }
    }

    cout << "Element not found";
    return 0;
}
