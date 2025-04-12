#include <iostream>
#include <cstring>

using namespace std;


int main() {
    char sir[101];
    cin.getline(sir, 101);

    int n;
    cin >> n;

    char* cuvant = strtok(sir, " ");

    bool exists = false;

    while (cuvant) {
        if (n == strlen(cuvant)) {
            cout << cuvant << '\n';
            exists = true;
        }
        cuvant = strtok(NULL, " ");
    }

    if (!exists) {
        cout << "nu exista\n";
    }

    return 0;
}
