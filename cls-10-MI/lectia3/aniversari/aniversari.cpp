#include <iostream>

using namespace std;

struct Aniversare {
    int an, luna, zi;
};

int comparaDate(Aniversare aniv1, Aniversare aniv2) {
    if (aniv1.an > aniv2.an) {
        return 1; // primul e mai mare;
    }
    else if (aniv1.an < aniv2.an) {
        return -1; // primul e mai mic;
    }
    else {
        if (aniv1.luna > aniv2.luna) {
            return 1; // primul e mai mare;
        }
        else if (aniv1.luna < aniv2.luna) {
            return -1; // primul e mai mic;
        }
        else {
            if (aniv1.zi > aniv2.zi) {
                return 1; // primul e mai mare;
            }
            else if (aniv1.zi < aniv2.zi) {
                return -1; // primul e mai mic;
            }
            else {
                return 0; // egale
            }
        }
    }
} 

int main() {
    int n;
    cin >> n;

    Aniversare Max, Min;

    cin >> Max.an >> Max.luna >> Max.zi;
    Min = Max;

    int pozMax=1, pozMin=1;

    for (int i = 2; i <= n; i++) {
        Aniversare aniv;
        cin >> aniv.an >> aniv.luna >> aniv.zi;

        if (comparaDate(aniv, Max) == 1) {
            Max = aniv;
            pozMax = i;
        }
        if (comparaDate(aniv, Min) == -1) {
            Min = aniv;
            pozMin = i;
        }
    }

    cout << pozMax << ' ' << pozMin << '\n';

    return 0;
}
