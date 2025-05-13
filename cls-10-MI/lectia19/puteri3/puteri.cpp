#include <iostream>

using namespace std;

// void puteri3(int n) {
//     int putere = 1;

//     while (n) {
//         int rest = n % 2;
//         if (rest) {
//             cout << putere << ' '; 
//         }
//         putere *= 2;
//         n /= 2;
//     }
// }

void puteri3_rec(int n, int putere) {
    if (n == 0) {
        return;
    }

    int rest = n % 2;
    if (rest) {
        cout << putere << ' '; 
    }
    puteri3_rec(n / 2, putere*2);
}

int main() {

    int n;

    cin >> n;

    puteri3_rec(n, 1);

    return 0;
}