#include <iostream>
#include <fstream>

using namespace std;

// int search_naive(int v[], int n, int elem) {
//     int iteratii = 0;
//     for (int i = 0; i < n; i++) {
//         iteratii++;
//         if (v[i] == elem) {
//             return true;
//         }
//     }
//     // cout << iteratii << '\n';
//     return false;
// }

// int search_binary(int v[], int n, int elem) {
//     int st = 0;
//     int dr = n-1;

//     while (st <= dr) {
//         int mid = (st+dr) / 2;
//         if (v[mid] == elem) {
//             return true;
//         }
//         else if(v[mid] < elem) {
//             st = mid+1;
//         }
//         else {
//             dr = mid-1;
//         }
//     }

//     return false;
// }

int main() {
    ifstream fin("numere25.in");
    ofstream fout("numere25.out");

    int n;
    fin >> n;
    
    int nr;
    int lastNum = 0;

    int contor = 0;

    while (fin >> nr) {
        for (int i = lastNum+1; i < nr; i++) {
            fout << i << ' ';
            contor++;
        }
        lastNum = nr;
    }

    for (int i = nr+1; i <= n; i++) {
        fout << i << ' ';
        contor++;
    }

    if (!contor) {
        fout << "Nu exista\n";
    }

    fout << '\n';

    return 0;
}
