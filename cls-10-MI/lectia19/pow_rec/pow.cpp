#include <iostream>

using namespace std;

// int pow_serban(int a, int b) {
//     int rez = 1;
//     for (int i = 1; i <= b; i++) {
//         rez *= a;
//     }
//     return rez;
// }

int pow_serban_rec(int a, int b) {
    if (b == 0) {
        return 1;
    }

    return a * pow_serban_rec(a, b-1);
}

int main() {

    int a, b;

    cin >> a >> b;

    cout << pow_serban_rec(a, b);

    return 0;
}
