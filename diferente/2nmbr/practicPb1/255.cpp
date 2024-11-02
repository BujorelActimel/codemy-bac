#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << 1 << '\n';
        return 0;
    }

    int a = 1;
    int b = 1;

    cout << a << ' ' << b << ' ';
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        cout << c << ' ';
        a = b;
        b = c;
    }
    cout << '\n';
    return 0;
}