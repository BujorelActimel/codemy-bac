#include <iostream>

using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    int a[n][n] = {0};

    for (int i = 0; i < n; i++) {
        a[i][0] = k * (i+1) + i;
        for (int j = 1; j < n; j++) {
            a[i][j] = a[i][j-1] - 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}