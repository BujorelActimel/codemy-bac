#include <iostream>

using namespace std;

int main() {
    int np;
    cin >> np;

    int a[np * 2];

    for (int i = 0; i < np * 2; i++) {
        cin >> a[i];
    }


    // max pe prima sectiune
    int Max = 0;
    int poz_Max = 0;
    for (int i = 0; i < np; i++) {
        if (a[i] > Max) {
            Max = a[i];
            poz_Max = i+1;
        }
    }

    cout << "1:" << poz_Max << ' ';

    Max = 0;

    for (int i = 0; i < np; i++) {
        if (a[np + i] > Max) {
            Max = a[np + i];
            poz_Max = i+1;
        }
    }
    cout << "2:" << poz_Max << '\n';

    return 0;
}