#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    ifstream fin("paritatesiruri.in");
    ofstream fout("paritatesiruri.out");

    int n;
    fin >> n;

    while (n--) {
        char s[10001];
        fin >> s;

        for (int i = 1; i < strlen(s); i += 2) {
            fout << s[i];
        }

        fout << ' ';

        for (int i = 0; i < strlen(s); i += 2) {
            fout << s[i];
        }
        fout << '\n';
    }

    fin.close();
    fout.close();
    return 0;
}