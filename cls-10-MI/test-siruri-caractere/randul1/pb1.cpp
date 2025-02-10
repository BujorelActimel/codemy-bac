#include <iostream>
#include <cstring>

using namespace std;


int main() {
    char s[101];
    cin.getline(s, 101);

    // a) sa se verifica daca s este cuvant (doar litere)
    // pargurgem sirul caracter cu caracter, daca gasim 
    // un caracter care este < 'a' sau > 'z' setam variabila
    // isWord la false si incheiam cautarea

    bool isWord = true;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] < 'a' || s[i] > 'z') {
            isWord = false;
            break;
        }
    }

    if (isWord) {
        cout << "da\n";
    }
    else {
        cout << "nu\n";
    }

    // b) sa se determine toate prefixele cuvantului
    // i reprezinta unde se termina prefixul curent
    // j reprezinta indexii de la 0 la i-ul curent
    for (int i = 1; i <= strlen(s); i++) {
        for (int j = 0; j < i; j++) {
            cout << s[j];
        }
        cout << ' ';
    }
    cout << '\n';


    // c) sa se elimine toate aparitiile unui caracter dat
    // parcurgem sirul caracter cu caracter, daca gasim 
    // un caracter care este egal cu caracterul dat, il sarim
    // altfel, il copiem in pozitia curenta a sirului rezultat
    char copie[101];
    strcpy(copie, s);
    char caracter;
    cin >> caracter;

    int k = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != caracter) {
            s[k++] = s[i];
        }
    }
    s[k] = '\0';

    cout << s << '\n';
    strcpy(s, copie);

   // d) sa se verifica daca sirul este 2 * alt sir dat
   // verificam daca lungimea sirului s este de doua ori
   // lungimea sirului subSir si daca primele si ultimele
   // lenSubSir caractere din s sunt egale cu subSir
    char subSir[51];
    cin.get();
    cin.getline(subSir, 51);

    int lenS = strlen(s);
    int lenSubSir = strlen(subSir);

    if (lenS == 2 * lenSubSir && strncmp(s, subSir, lenSubSir) == 0 && strncmp(s + lenSubSir, subSir, lenSubSir) == 0) {
        cout << "da\n";
    } else {
        cout << "nu\n";
    }

    return 0;
}
