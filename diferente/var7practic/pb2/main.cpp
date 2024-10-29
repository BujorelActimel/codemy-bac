#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n;
    fin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                // sterge elementul de pe pozitia j
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        fout << a[i] << ' ';
    }

    return 0;
}
