#include <iostream>

using namespace std;

// int e_prim(int nr) {
//     if (nr == 2) {
//         return 1;
//     }
//     if (nr % 2 == 0) {
//         return 0;
//     }

//     int nr_div = 2;
//     for (int d = 3; d * d <= nr; d += 2) {
//         if (nr % d == 0) {
//             nr_div++;
//         }
//     }
//     if (nr_div == 2) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

int main() {
    int n = 48;
    // cin >> n;
    for (int d = 2; d <= n; d++) {
        if (n % d == 0) {
            int nr_div = 0;

            for (int div = 1; div <= d; div++) {
                if (d % div == 0) {
                    nr_div++;
                }
            }

            if (nr_div == 2) {
                int p = 0;
                while(n % d == 0) {
                    p++;
                    n /= d;
                }
                cout << d << ' ' << p << '\n';
            }
        }
    }
}
