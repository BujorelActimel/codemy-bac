#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n], c[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int index_a = 0, index_b = 0, index_c = 0;

    while (index_a < n && index_b < n && index_c <  n) {
        int minim = min(a[index_a], min(b[index_b], c[index_c]));

        if (minim == max(a[index_a], max(b[index_b], c[index_c]))) {
            cout << a[index_a] << '\n';
            return 0;
        }

        if (minim == a[index_a]) {
            index_a++;
        }

        if (minim == b[index_b]) {
            index_b++;
        }

        if (minim == c[index_c]) {
            index_c++;
        }
    }

    cout << -1 << '\n';

    return 0;
}
