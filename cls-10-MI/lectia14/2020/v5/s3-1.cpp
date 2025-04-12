#include <iostream>

using namespace std;

int pNumar(int num) {
    int suma = 0;

    for (int div = 1; div * div <= num; div++) {
        if (num % div == 0) {
            suma += div;
            suma += (num / div);
        }
    }

    return num % 2 == suma % 2;
}

int kpn(int a, int b, int k) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (pNumar(i)) {
            cnt++;
            if (cnt == k) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    cout << kpn(a, b, k) << '\n';

    return 0;
}
