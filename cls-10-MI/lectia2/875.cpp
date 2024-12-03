#include <iostream>
#include <cstring>

using namespace std;

bool isdigit(char c) {
    return c >= '0' && c <= '9';
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character left in the input buffer

    int stack[1000];
    int varf = 0;

    int rezultate[n];
    int k = 0;

    while (n--) {
        char comanda[100];
        cin.getline(comanda, 100);

        char prefixComanda[3];
        strcpy(prefixComanda, comanda);
        prefixComanda[2] = '\0';

        if (strcmp(prefixComanda, "pu") == 0) {
            // push
            
            int numar = atoi(comanda + 5);
            
            stack[varf] = numar;
            varf++;

        }

        if (strcmp(prefixComanda, "po") == 0) {
            // pop
            if (varf > 0) {
                varf--;
            }
            else {
                cout << "Nu sunt elemente in stack\n";
            }
        }
        
        if (strcmp(prefixComanda, "to") == 0) {
            // top
            if (varf-1 > 0) {
                // cout << stack[varf-1] << '\n';
                rezultate[k++] = stack[varf-1];
            }
            else {
                cout << "Nu sunt elemente in stack\n";
            }
        }
    }

    for (int i = 0; i < k; i++) {
        cout << rezultate[i] << '\n';
    }

    return 0;
}
