// #include <iostream>
// #include <fstream>

// using namespace std;

// int main() {
//     ifstream fin("date.in");
//     ofstream fout("date.out");

//     int n;
//     fin >> n;

//     int a[9];

//     int numar_cifre = 0;

//     // am transformat numarul intr un sir de cifre
//     while(n > 0) {
//         a[numar_cifre] = n % 10;
//         n /= 10;
//         numar_cifre++;
//     }

//     // am sortat sirul
//     for (int i = 0; i < numar_cifre - 1; i++) {
//         for (int j = i + 1; j < numar_cifre; j++) {
//             if (a[i] < a[j]) {
//                 int aux = a[i];
//                 a[i] = a[j];
//                 a[j] = aux;
//             }
//         }
//     }

//     // afiseaza 
//     for (int i = 0; i < numar_cifre; i++) {
//         if (a[i] != a[i + 1]) {
//             fout << a[i];
//         }
//     }
// }



// vector de frecventa
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");

    int n;
    fin >> n;

    int a[10] = {0};

    while (n > 0) {
        int c = n % 10;
        a[c]++;
        n /= 10;
    }

    for (int i = 9; i >=0; i--) {
        if (a[i] > 0) {
            fout << i;
        }
    }
}