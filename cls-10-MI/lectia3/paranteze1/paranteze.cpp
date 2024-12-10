#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Stiva {
    char paranteze[256];
    int vfStiva = 0;

    void push(char paranteza) {
        paranteze[vfStiva] = paranteza;
        vfStiva++;
    }

    void pop() {
        vfStiva--;
    }

    bool isEmpty() {
        return vfStiva == 0;
    }

    char top() {
        return paranteze[vfStiva-1];
    }
};

int main() {
    ifstream fin("paranteze1.in");
    ofstream fout("paranteze1.out");

    int n;
    fin >> n;

    for (int i = 0; i < n; i++) {
        char linie[256];
        fin >> linie;
        Stiva stiva;
        bool amIesit = false;

        for (int c = 0; c < strlen(linie); c++) {
            if (linie[c] == '(') {
                stiva.push(linie[c]);
            }
            if (linie[c] == ')') {
                if (stiva.isEmpty()) {
                    fout << 0 << '\n';
                    amIesit = true;
                    break;
                }
                else {
                    stiva.pop();
                }
            }
        }

        if (!amIesit) {
            if (stiva.isEmpty()) {
                fout << 1 << '\n';
            }
            else {
                fout << 0 << '\n';
            }
        }
    }

    fin.close();
    fout.close();

    return 0;
}
