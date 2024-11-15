#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> k >> n;
    int a[n];
    int p = 1;

    for (int i = 0; i < n; i += 2) {
        a[i] = k * p;
        p++;
    }
    p = 0;
    if (n % 2 == 0) {
        for (int i = n - 1; i >= 0; i -= 2) {
            a[i] = p;
            p++;
        }
    }
    else {
        for (int i = n - 2; i >= 0; i -= 2) {
            a[i] = p;
            p++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';

    return 0;
}