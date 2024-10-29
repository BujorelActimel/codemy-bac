#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n;
    bool dif = 1;
    fin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int j = 1;
        while (j <= n) {
            if (a[i] == a[j]) {
                dif = 0;
            }
            j++;
        }
        if (dif == 1) {
            fout << a[i] << ' ';
        }
        else {
            fout << a[i] << ' ';
            n--;
        }
    }
    return 0;
}
