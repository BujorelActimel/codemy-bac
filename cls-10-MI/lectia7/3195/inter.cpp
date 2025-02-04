#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;

    cin.get();

    char s[1001];
    cin.getline(s, 1001);

    char naturale[50][20];
    int n_nat = 0;

    char intregi[50][20];
    int n_int = 0;

    char rationale[50][20];
    int n_rat = 0;

    char irationale[50][20];
    int n_irat = 0;

    char* numar_curent = strtok(s, " ");
    while (numar_curent != NULL) {
        // irational
        if (strstr(numar_curent, "...") != NULL) {
            strcpy(irationale[n_irat], numar_curent);
            n_irat++;
        } 
        else if (strchr(numar_curent, '.') != NULL) {
            strcpy(rationale[n_rat], numar_curent);
            n_rat++;
        }
        else if (strchr(numar_curent, '-') != NULL) {
            strcpy(rationale[n_rat], numar_curent);
            n_rat++;
            strcpy(intregi[n_int], numar_curent);
            n_int++;
        }
        else {
            strcpy(rationale[n_rat], numar_curent);
            n_rat++;
            strcpy(intregi[n_int], numar_curent);
            n_int++;
            strcpy(naturale[n_nat], numar_curent);
            n_nat++;
        }

        numar_curent = strtok(NULL, " ");
    }

    if (n_nat == 0) {
        cout << "Multime vida\n";
    }
    else {
        for (int i = 0; i < n_nat; i++) {
            cout << naturale[i] << ' ';
        }
        cout << '\n';
    }

    if (n_int == 0) {
        cout << "Multime vida\n";
    }
    else {
        for (int i = 0; i < n_int; i++) {
            cout << intregi[i] << ' ';
        }
        cout << '\n';
    }

    if (n_rat == 0) {
        cout << "Multime vida\n";
    }
    else {
        for (int i = 0; i < n_rat; i++) {
            cout << rationale[i] << ' ';
        }
        cout << '\n';
    }

    if (n_irat == 0) {
        cout << "Multime vida\n";
    }
    else {
        for (int i = 0; i < n_irat; i++) {
            cout << irationale[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
