#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");

    int n;
    fin >> n;

    int s = 0;

    for (int i = 1; i <= n; i++) {
        int suma_cifre = 0;
        int aux = i;
        while(aux > 0) {
            suma_cifre++;
            aux /= 10;
        }

        s += suma_cifre;
    }

    fout << s << '\n';
}


// #include <iostream>
// #include <fstream>

// using namespace std;

// int suma_cifre(int numar) {
//     int rez = 0;
//     while (numar) {
//         rez++;
//         numar /= 10;
//     }
//     return rez;
// }

// int main() {
//     ifstream fin("date.in");
//     ofstream fout("date.out");

//     int n;
//     fin >> n;

//     int s = 0;

//     for (int i = 1; i <= n; i++) {
//         s += suma_cifre(i);
//     }

//     fout << s << '\n';
// }