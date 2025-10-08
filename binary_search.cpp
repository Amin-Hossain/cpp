#include <iostream>
using namespace std;

int BinSrch(int a[], int i, int l, int x) {
    if (i > l)  // ❗ base case ঠিক করা হলো
        return -1;

    int mid = (i + l) / 2;

    if (x == a[mid])
        return mid;
    else if (x < a[mid])
        return BinSrch(a, i, mid - 1, x);
    else
        return BinSrch(a, mid + 1, l, x);
}

int main() {
    int n, x, l;
    cout << "Enter The Size Of Array: ";
    cin >> n;

    int a[n];
    cout << "Enter All Sorted Elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter Searching Element: ";
    cin >> x;

    l = BinSrch(a, 0, n - 1, x);

    if (l == -1)
        cout << "Item not found" << endl;
    else
        cout << "Item found in " << l + 1 << "th position" << endl;

    return 0;
}
