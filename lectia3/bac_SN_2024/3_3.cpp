// 2 3 5 9


// 33 65

// f3 = 3 

// f1=2, f2=3, f3 = 3 * f2 - 2 * f1, f4 = f3 -  2 * f2
// fn=3∙f(n-1)-2∙fn-2

// 65 33 x x x

// 65 33 17 9

// x 33 65

// 65 = 3 * 33 - 2 x
// 2x = 99 - 65 = 34
// x = 17

// 17 * 3 = 51 - 33 = 18 / 2

// y = cel mai din stanga
// x = al doilea cel mai din stanga
// z = (3 * x - y) / 2

#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;
    cout << y << ' ' << x << ' ';

    while (x > 2) {
        int z = (3 * x - y) / 2;
        cout << z << ' ';
        y = x;
        x = z;
    }

    cout << '\n';
    return 0;
}
