#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream fin("textcuv.in");
    ofstream fout("textcuv.out");

    int cerinta;
    fin >> cerinta;
    fin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (cerinta == 1) {
        char s[1001];
        fin.getline(s, 1001);
        char copie[1001];
        strcpy(copie, s);

        int nrCuvinte = 0;

        char* cuv = strtok(s, " .,!?:;-");
        while (cuv) {
            nrCuvinte++;
            cuv = strtok(NULL, " .,!?:;-");
        }

        fout << nrCuvinte << '\n';

        cuv = strtok(copie, " .,!?:;-");
        while (cuv) {
            fout << cuv << '\n';
            cuv = strtok(NULL, " .,!?:;-");
        }
    }
    else if (cerinta == 2) {
        char s[1001];
        fin.getline(s, 1001);
        
        char minim[1001];

        char* cuv = strtok(s, " .,!?:;-");
        if (cuv) {
            strcpy(minim, cuv);
            cuv = strtok(NULL, " .,!?:;-");
        }
        while (cuv) {
            if (strcmp(cuv, minim) < 0) {
                strcpy(minim, cuv);
            }
            cuv = strtok(NULL, " .,!?:;-");
        }
        fout << minim << '\n';
    }
    else if (cerinta == 3) {
        char s[1001];
        fin.getline(s, 1001);

        int contor = 0;

        char* cuv = strtok(s, " .,!?:;-");
        while (cuv) {
            if (strstr(cuv, "ini") != NULL) {
                contor++;
            }
            cuv = strtok(NULL, " .,!?:;-");
        }

        fout << contor << '\n';
    }
    else if (cerinta == 4) {
        char s[1001];
        fin.getline(s, 1001);

        char* cuv = strtok(s, " .,!?:;-");
        while (cuv) {
            int n = strlen(cuv);
            for (int i = 0; i < n/2; i++) {
                swap(cuv[i],cuv[n-1-i]);
            }
            // reverse(cuv, cuv + strlen(cuv));
            fout << cuv << '\n';

            cuv = strtok(NULL, " .,!?:;-");
        }
    }
    else if (cerinta == 5) {
        char s[1001];
        fin.getline(s, 1001);

        int contor = 0;

        char* cuv = strtok(s, " .,!?:;-");
        while (cuv) {
            if (cuv[strlen(cuv)-1] == 'a') {
                contor++;
            }

            cuv = strtok(NULL, " .,!?:;-");
        }

        fout << contor << '\n';
    }
    else if (cerinta == 6) {
        char s[1001];
        fin.getline(s, 1001);

        char* cuv = strtok(s, " .,!?:;-");
        
        int lungimeMinima = strlen(cuv);
        int lungimeMaxima = strlen(cuv);

        cuv = strtok(NULL, " .,!?:;-");

        while (cuv) {                                                 
            lungimeMaxima = max(lungimeMaxima, (int)strlen(cuv));
            lungimeMinima = min(lungimeMinima, (int)strlen(cuv));

            cuv = strtok(NULL, " .,!?:;-");
        }

        fout << lungimeMinima << ' ' << lungimeMaxima << '\n';
    }

    return 0;
}
