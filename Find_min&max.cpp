#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mx = a[0];
    int mn = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > mx)
            mx = a[i];
        if (a[i] < mn)
            mn = a[i];
    }

    cout << "Maximum value = " << mx << endl;
    cout << "Minimum value = " << mn << endl;

    return 0;
}
