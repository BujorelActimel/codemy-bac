#include <iostream>

using namespace std;

int putere5(int num) {
    int rez = 0;
    while (num % 5 == 0) {
        rez++;
        num /= 5;
    }
    return rez;
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int putereUltim = putere5(a[n-1]);

    for (int i = 0; i < n-1; i++) {
        if (a[i] != a[n-1] && putere5(a[i]) == putereUltim) {
            cout << a[i] << ' ';
        }
    }
    cout << '\n';

    return 0;
}
