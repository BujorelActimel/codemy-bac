#include <iostream>

using namespace std;

bool cifre_diferite(int x) {
    int frecv[10] = {0};
    while (x != 0) {
        frecv[x % 10]++;
        x /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (frecv[i] > 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (!cifre_diferite(x)) {
            cout << "NU\n";
            return 0;
        }
    }
    cout << "DA\n";
    return 0;
}