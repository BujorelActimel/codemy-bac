#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("siruri_concatenate.in");
    ofstream fout("siruri_concatenate.out");

    int n;
    fin >> n;

    int contor = 0;

    for (int i = 0; i < n; i++) {
        char s[5001];
        fin >> s;

        bool e_bun = true;

        for (int i = 0; i < strlen(s)/2; i++) {
            if (s[i] != s[i + strlen(s)/2]) {
                e_bun = false;
            }
        }

        if (e_bun) {
            contor++;
        }
    }

    fout << contor;

    fin.close();
    fout.close();

    return 0;
}
