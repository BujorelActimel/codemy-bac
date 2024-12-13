#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[3*n];
    for (int i = 0; i < 3 * n; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    bool gasit = false;

    for (int i = 0; i < 3 * n; i += 3) {
        int prenume = a[i];
        int nume = a[i+1];

        if (prenume == x) {
            cout << nume << ' ';
            gasit = true;
        }
    }

    if (!gasit) {
        cout << "NU";
    }

    cout << '\n';

    return 0;
}
