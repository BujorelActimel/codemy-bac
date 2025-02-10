#include <iostream>
#include <cstring>

using namespace std;

// Functie care verifica daca un cuvant este palindrom
bool isPalindrome(char s[]) {
    int len = strlen(s); // Determina lungimea cuvantului
    for (int i = 0; i < len/2; i++) { // Parcurge cuvantul de la inceput si de la sfarsit simultan
        if (s[i] != s[len-i-1]) { // Compara caracterele corespunzatoare (primul cu ultimul, al doilea cu penultimul,  samd..)
            return false; // Daca gaseste o pereche de caractere care nu sunt egale, returneaza false
        }
    }
    return true; // Daca toate perechile de caractere sunt egale, returneaza true
}

int main() {
    char s[101];
    cin.getline(s, 101); // Citeste textul de la tastatura

    char cuvinte[50][50]; // Matrice pentru a stoca cuvintele palindrom
    int k = 0; // Contor pentru numarul de cuvinte palindrom
    
    char* cuv = strtok(s, " ");
    while (cuv) {
        if (isPalindrome(cuv)) { // Verifica daca cuvantul este palindrom
            strcpy(cuvinte[k], cuv); // Copiaza cuvantul in matricea de cuvinte palindrom
            k++;
        }
        cuv = strtok(NULL, " "); // Trecem la urmatorul cuvant
    }

    // Sortam cuvintele palindrom dupa lungimea lor
    for (int i = 0; i < k-1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (strlen(cuvinte[i]) > strlen(cuvinte[j])) { // Compara lungimile cuvintelor
                swap(cuvinte[i], cuvinte[j]); // Schimba cuvintele daca nu sunt in ordine crescatoare
            }
        }
    }

    // Afisam cuvintele palindrom sortate
    for (int i = 0; i < k; i++) {
        cout << cuvinte[i] << ' ';
    }
    cout << '\n';

    return 0;
}
