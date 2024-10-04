#include <iostream>
#include <cstring>

using namespace std;

// int[] = {1, 2, 34}
// s[] = {'a', ' ', 'A'};

// s[] = "Nume Prenume";

char s[] = "david";
char s2[] = "popovici";
// david\0 popivici\0__

// Popovici2022

void FNume(char s[], char id[]) {
    char* pozitie = strchr(s, ' ');
    strcpy(id, pozitie + 1);
    strcat(id, "2022");
}

int main() {
    char id[50];

    FNume("David Popovici", id);

    cout << id << "\n";
    return 0;
}