#include <iostream>

using namespace std;

int ePrim(int nr) {
    if (nr == 2) {
        return 1;
    }
    if (nr % 2 == 0) {
        return 0;
    }
    for (int d = 3; d * d <= nr; d += 2) {
        if (nr % d == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (ePrim(a[i])) {
            cout << "DA\n";
            return 0;
        }
    }

    cout << "NU\n";
    return 0;
}
