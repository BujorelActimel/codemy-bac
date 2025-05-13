#include <iostream>

using namespace std;


void base16_rec(long long int base10) {
    if (base10 == 0) {
        return;
    }

    int rest = base10 % 16;

    char rest_char;
    if (rest < 10) {
        rest_char = '0' + rest;
    }
    else {
        rest_char = 'A' + rest - 10;
    }


    base16_rec(base10 / 16);
    cout << rest_char;
}


// void base16(long long int base10) {
//     char result[30];
//     int k = 0;

//     while (base10 != 0) {
//         int rest = base10 % 16;
//         base10 /= 16;

//         char rest_char;
//         if (rest < 10) {
//             rest_char = '0' + rest;
//         }
//         else {
//             rest_char = 'A' + rest - 10;
//         }

//         result[k] = rest_char;
//         k++;
//     }

//     for (int i = k-1; i >= 0; i--) {
//         cout << result[i];
//     }

//     cout << '\n';
// }

int main() {

    long long int n;

    cin >> n;

    base16_rec(n);

    return 0;
}


