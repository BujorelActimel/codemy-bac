#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    ifstream fin("doarvocale.in");
    ofstream fout("doarvocale.out");

    int n;
    fin >> n;

    int contor = 0;

    char vocale[] = "aeiou";

    for (int i = 0; i < n; i++) {
        char s[31];
        fin >> s;

        bool doarVocale = true;

        for (int j = 0; j < strlen(s); j++) {
            if (strchr(vocale, s[j]) == NULL) {
                doarVocale = false;
                break;
            }
        }

        if (doarVocale) {
            contor++;
        }
    }

    fout << contor;

    fin.close();
    fout.close();

    return 0;
}