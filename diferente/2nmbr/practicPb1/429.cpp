#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int unu = 0, zero = 0;

    while (n != 0) {
        if (n % 2 == 1) {
            unu++;
        }
        else {
            zero++;
        }
        n /= 2;
    }

    cout << zero << ' ' << unu << '\n';

    return 0;
}