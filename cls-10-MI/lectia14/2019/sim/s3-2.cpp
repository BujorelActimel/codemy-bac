#include <iostream>
#include <cstring>

using namespace std;

char* cuvintePrescurtabile[] = {"COLEGIUL", "LICEUL", "NATIONAL", "TEORETIC"}; 

int main() {
    char text[51];
    cin.getline(text, 51);

    char* cuv = strtok(text, " ");

    char rezultat[300];

    while (cuv) {
        int foundPrescurtare = 0;
        if (cuv[strlen(cuv)-1] == '.') {
            cuv[strlen(cuv)-1] = '\0';
            for (int i = 0; i < 4; i++) {
                if (strstr(cuvintePrescurtabile[i], cuv) == cuvintePrescurtabile[i]) {
                    strcat(rezultat, cuvintePrescurtabile[i]);
                    strcat(rezultat, " ");
                    foundPrescurtare = 1;
                    break;
                }
            }
        }

        if (!foundPrescurtare) {
            strcat(rezultat, cuv);
            strcat(rezultat, " ");
        }

        cuv = strtok(NULL, " ");
    }
    cout << rezultat << '\n';

    return 0;
}
