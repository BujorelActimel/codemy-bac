#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char sir[10001];
    cin.getline(sir, 10001);

    char cuvinte[100][100];

    int i = 0;
    int k = 0;

    char* start_cuv = NULL;

    while (i <= strlen(sir)) {
        if (start_cuv == NULL) {
            start_cuv = sir+i;
        }
        if (sir[i] == ' ') {
            char cuvant[100];
            strcpy(cuvant, start_cuv);
            cuvant[i] = '\0';
            strcpy(cuvinte[k++], cuvant);
            start_cuv = NULL;
        }
        i++;
    }

    for (int i = 0; i < k; i++) {
        cout << cuvinte[i] << '\n';
    }

    return 0;
}