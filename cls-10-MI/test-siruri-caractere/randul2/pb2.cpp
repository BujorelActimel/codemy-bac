#include <iostream>
#include <cstring>

using namespace std;

// Functie care verifica daca un cuvant are doar vocale
bool onlyVowels(char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        if (strchr("aeiou", s[i]) == NULL) { // Verifica daca caracterul curent nu este o vocala
            return false; // Daca gaseste un caracter care nu este vocala, returneaza false
        }
    }
    return true; // Daca toate caracterele sunt vocale, returneaza true
}

int main() {
    char s[101];
    cin.getline(s, 101); // Citeste textul de la tastatura

    char cuvinte[50][50]; // Matrice pentru a stoca cuvintele care contin doar vocale
    int k = 0; // Contor pentru numarul de cuvinte care contin doar vocale
    
    // Folosim strtok pentru a separa cuvintele din text
    char* cuv = strtok(s, " ");
    while (cuv) {
        if (onlyVowels(cuv)) { // Verifica daca cuvantul contine doar vocale
            strcpy(cuvinte[k], cuv); // Copiaza cuvantul in matricea de cuvinte care contin doar vocale
            k++;
        }
        cuv = strtok(NULL, " "); // Trecem la urmatorul cuvant
    }

    // Sortam cuvintele care contin doar vocale in ordine lexicografica
    for (int i = 0; i < k-1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (strcmp(cuvinte[i], cuvinte[j]) > 0) { // Compara cuvintele lexicografic
                swap(cuvinte[i], cuvinte[j]); // Schimba cuvintele daca nu sunt in ordine crescatoare
            }
        }
    }

    // Afisam cuvintele care contin doar vocale sortate
    for (int i = 0; i < k; i++) {
        cout << cuvinte[i] << ' '; // Afiseaza fiecare cuvant care contine doar vocale
    }
    cout << '\n';

    return 0;
}
