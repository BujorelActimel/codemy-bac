#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int Max = 0;
        while (a[i]) {
            Max = max(a[i] % 10, Max);
            a[i] /= 10;
        }
        cout << Max << ' ';
    }

    cout << '\n';
    return 0;
}