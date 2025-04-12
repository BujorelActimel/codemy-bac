#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("inserare2.in");
    ofstream fout("inserare2.out");

    int n, m;
    fin >> n >> m;

    int Min;
    fin >> Min;

    for (int i = 0; i < n-2; i++) {
        int nr;
        fin >> nr;
    }
    int Max;
    fin >> Max;

    int prev;

    for (int i = 0; i < m; i++) {
        int nr;
        fin >> nr;
        if (nr > Min) {
            if (nr > Max) {
                if (i + 1 == 1 || i + 1 == m) {
                    fout << "imposibil";
                }
                else {
                    fout << i+1;
                }
            }
            else {
                fout << "imposibil";
            }
            return 0;
        }
    }

    return 0;
}
