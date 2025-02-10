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

// Functie care verifica daca doua siruri sunt anagrame
bool isAnagram(char s1[], char s2[]) {
    int freq1[256] = {0}; // Frecventa caracterelor pentru primul sir
    int freq2[256] = {0}; // Frecventa caracterelor pentru al doilea sir

    // Calculam frecventa caracterelor pentru primul sir
    for (int i = 0; i < strlen(s1); i++) {
        freq1[s1[i]]++;
    }

    // Calculam frecventa caracterelor pentru al doilea sir
    for (int i = 0; i < strlen(s2); i++) {
        freq2[s2[i]]++;
    }

    // Comparam frecventele caracterelor
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            return false; // Daca frecventele nu sunt egale, sirurile nu sunt anagrame
        }
    }

    return true; // Daca toate frecventele sunt egale, sirurile sunt anagrame
}

int main() {
    char s[101];
    cin.getline(s, 101);

    // a) sa se verifica daca s este un numar natural (doar cifre)
    // pargurgem sirul caracter cu caracter, daca gasim 
    // un caracter care este < '0' sau > '9' setam variabila
    // isNum la false si incheiam cautarea

    bool isNum = true;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] < '0' || s[i] > '9') {
            isNum = false;
            break;
        }
    }

    if (s[0] == '0') {
        isNum = false;
    }

    if (isNum) {
        cout << "da\n";
    }
    else {
        cout << "nu\n";
    }

    // b) sa se determine toate sufixele sirului
    // i reprezinta unde se termina prefixul curent
    // j reprezinta indexii de la 0 la i-ul curent
    for (int i = strlen(s)-1; i >= 0; i--) {
        cout << s + i << ' ';
    }
    cout << '\n';


    // c) sa se verifica daca sirul este palindrom
    if (isPalindrome(s)) {
        cout << "da\n";
    }
    else {
        cout << "nu\n";
    }


    // d) sa se verifica daca un alt sir dat este anagrama sirului 
    char t[101];
    cin.getline(t, 101);
    if (isAnagram(s, t)) {
        cout << "da\n";
    } 
    else {
        cout << "nu\n";
    }


    return 0;
}
