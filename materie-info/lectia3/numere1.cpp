// 0.424 secunde

// #include <iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int rez1=-1, rez2=-1;

//     for (int nr = 999; nr >= 100; nr--) {
//         int amGasit = 0;

//         for (int i = 0; i < n; i++) {
//             if (a[i] == nr) {
//                 amGasit = 1;
//                 break;
//             }
//         }

//         if (!amGasit) {
//             if (rez2 == -1) {
//                 rez2 = nr;
//             } else if (rez1 == -1) {
//                 rez1 = nr;
//             } else {
//                 break;
//             }
//         }

//     }

    // if (rez1 == -1) {
    //     cout << "NU EXISTA\n";
    //     return 0;
    // }

    // cout << rez1 << ' ' << rez2 << '\n';
//     return 0;
// }

// 0.392
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int frecv[1000] = {0};

    for (int i = 0; i < n; i++) {
        int nr;
        cin >> nr;

        if (nr >= 100 && nr <= 999) {
            frecv[nr]++;
        }
    }

    int rez1=-1, rez2=-1;

    for (int i = 999; i >= 100; i--) {
        if (frecv[i] == 0) {
            if (rez2 == -1) {
                rez2 = i;
            } else if (rez1 == -1) {
                rez1 = i;
            } else {
                break;
            }
        }
    }

    if (rez1 == -1) {
        cout << "NU EXISTA\n";
        return 0;
    }

    cout << rez1 << ' ' << rez2 << '\n';

    return 0;
}
