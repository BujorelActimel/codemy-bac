#include <fstream>

using namespace std;

int main() {
    ifstream fin("unice.in");
    ofstream fout("unice.out");

    int b[100] = {0};

    int n;
    fin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        fin >> a[i];
        b[a[i]]++;
    }

    for (int i = 0; i < 100; i++) {
        if (b[i] == 1) {
            fout << i << ' ';
        }
    }
    fout << "\n";


    return 0;
}