#include <iostream>

using namespace std;

int main() {
    int frecventa[101] = {0};
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        frecventa[x]++;
    }

    for (int i = 1; i <= 100; i++) {
        if (frecventa[i] > 0) {
            cout << "Numarul " << i << " apare de " << frecventa[i] << " ori\n";
        }
    }

    return 0;
}
