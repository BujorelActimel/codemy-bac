#include <iostream>

using namespace std;

// int factorial(int n) {
//     int rez = 1;

//     for (int i = 2; i <= n; i++) {
//         rez *= i;
//     }

//     return rez;
// }

int factorial(int n) {
    if (n == 0) { // cazul de baza
        return 1;
    }
    return factorial(n-1) * n; // pasul recursiv
}

int main() {
    cout << factorial(5) <<'\n';

    return 0;
}


