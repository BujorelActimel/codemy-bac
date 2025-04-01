#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.get();

    char text[101];
    cin.getline(text, 101);

    char cuvinteMari[100][100];
    char cuvinteMici[100][100];

    int lenMari = 0, lenMici = 0;

    char* cuv = strtok(text, " ");
    while (cuv) {
        if (strlen(cuv) >= n) {
            strcpy(cuvinteMari[lenMari], cuv);
            lenMari++;
        }
        else {
            strcpy(cuvinteMici[lenMici], cuv);
            lenMici++;
        }
        cuv = strtok(NULL, " ");
    }

    if (lenMari == 0 || lenMici == 0) {
        cout << "nu exista\n";
        return 0;
    }

    for (int i = 0; i < lenMari; i++) {
        cout << cuvinteMari[i] << '\n';
    }

    for (int i = 0; i < lenMici; i++) {
        cout << cuvinteMici[i] << '\n';
    }

    return 0;
}
