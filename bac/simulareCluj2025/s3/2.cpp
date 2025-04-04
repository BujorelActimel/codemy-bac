#include <iostream>

using namespace std;

int main() {
    int n, a, b;

    cin >> n >> a >> b;

    int v[n];

    if (a % 2 == 0) {
        a++;
    }
    else {
        a += 2;
    }

    if (b % 2 == 0) {
        b++;
    }
    else {
        b += 2;
    }


    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            v[i] = a;
            a += 2;
        }
        else {
            v[i] = b;
            b += 2;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}