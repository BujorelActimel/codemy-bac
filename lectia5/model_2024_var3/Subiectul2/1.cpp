// a) 9
// b) 6, 7, 8 (6, 7)

#include <iostream>
using namespace std;

int main() {
    int n, p=1, x;
    cin >> n;

    int i = 1;

    while (i <= n) {
        cin >> x;
        do {
            x /= 3;
        } while(x > 3);

        if (x) {
            p *= x;
        }
        i++;
    }
    cout << p << '\n';
    return 0;
}