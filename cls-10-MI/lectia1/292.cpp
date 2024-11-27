// 5
// 84 60 102 24 6

//   0  1   2  3  4   5
// _ 84 60 102 24 6 1221421 142214 12321314
// _ _ _ _ _ _ _ _ _

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ok = 1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] % a[n - 1] != 0) {
            ok = 0;
        }
    }

    if (ok) {
        cout << "DA\n";
    }
    else {
        cout << "NU\n";
    }

    return 0;
}
