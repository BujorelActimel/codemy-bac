#include <iostream>
#include <cstring>
#include <cstdlib> // Pentru qsort

using namespace std;

// Functia de comparatie pentru  (qsort o sa sorteze elementele in functie de rezultatul functiei asteia)
int compare(const void* a, const void* b) {
    return strcmp((const char*)a, (const char*)b);
}

void sortWords(char cuvinte[][101], int k) {
    qsort(cuvinte, k, sizeof(cuvinte[0]), compare);
}

int main() {
    char sir[10001];
    cin.getline(sir, 10001);

    char cuvinte[1000][101];
    int k = 0;

    // imparte string-ul in cuvinte cu strtok
    char* cuvant = strtok(sir, " ,.!?");
    while (cuvant != NULL) {
        strcpy(cuvinte[k++], cuvant);
        cuvant = strtok(NULL, " ,.!?");
    }

    // Sortam cuvintele lexicografic folosind qsort si functia de comparatie
    sortWords(cuvinte, k);

    // Afisam cuvintele si frecventa lor
    for (int i = 0; i < k; ) {
        int count = 1;
        while (i + count < k && strcmp(cuvinte[i], cuvinte[i + count]) == 0) {
            count++;
        }
        cout << cuvinte[i] << " " << count << '\n';
        i += count;
    }

    return 0;
}