#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    cout << "Inainte:\n";
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << "\nDupa:\n";

    for (int i = 1; i < m; i += 2) {
        int inaltimeMinima = a[i][0];
        for (int j = 1; j < n; j++) {
            inaltimeMinima = min(inaltimeMinima, a[i][j]);
        }

        for (int j = 0; j < n; j++) {
            if (a[i-1][j] >= inaltimeMinima) {
                a[i-1][j] = inaltimeMinima-1;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
