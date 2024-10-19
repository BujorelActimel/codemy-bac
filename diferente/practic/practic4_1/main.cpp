#include <iostream>
#include <fstream>

using namespace std;

int suma_cifrelor(int m) {
    int s = 0;
    while(m > 0) {
        s = s + m % 10;
        m /= 10;
    }
    return s;
}

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");

    int n;
    fin >> n;

    for (int m = 0; m <= n; m++) {
        if (m + suma_cifrelor(m) == n) {
            fout << "DA";
            return 0;
        }
    }

    fout << "NU";
    return 0;
}