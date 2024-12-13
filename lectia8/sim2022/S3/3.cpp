// Complexitate: O(N*log(N!))
// #include <iostream>
// #include <fstream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     long long unsigned int factorial = 1;
//     for (int i = 1; i <= n; i++) {
//         factorial *= i;
//     }

//     cout << factorial << '\n';

//     int p = 1;
//     int nouaLaP = 9;
//     int raspuns = 0;

//     while (nouaLaP <= factorial) {
//         if (factorial % nouaLaP == 0) {
//             raspuns = p;
//         }
//         p++;
//         nouaLaP *= 9;
//     }

//     ofstream fout("bac.txt");
//     fout << raspuns;
//     fout.close();

//     return 0;
// }

// Complexitate: O(N*log(N))
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int nrDe3 = 0;

    for (int i = 2; i <= n; i++) {
        int copie_i = i;
        while (copie_i % 3 == 0) {
            copie_i /= 3;
            nrDe3++;
        }
    }

    ofstream fout("bac.txt");
    fout << nrDe3/2;
    fout.close();

    return 0;
}
