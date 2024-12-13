#include <iostream>

using namespace std;

// x=10, y=101 și n=3000

// 3000 / 1010 = 2

// 2 * 1010 = 2020 + 2

int main() {

    int x, y, n;

    cin >> x >> y >> n;

    while(n--) {
        if (n%x == n%y && n%x == 2) {
            cout << n << '\n';
            return 0;
        }
    }
    cout << 0 << '\n';
    return 0;
}
