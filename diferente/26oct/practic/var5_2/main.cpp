#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n;
    fin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    int frecv_max = 0;
    for (int i = 0; i < n - 1; i++) {
        int frecv_curenta = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                frecv_curenta++;
            }
        }
        frecv_max = max(frecv_curenta, frecv_max);
    }

    for (int i = 0; i < n - 1; i++) {
        int frecv_curenta = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                frecv_curenta++;
            }
        }
        if (frecv_curenta == frecv_max) {
            fout << a[i] << ' ';
        }
    }

    return 0;
}