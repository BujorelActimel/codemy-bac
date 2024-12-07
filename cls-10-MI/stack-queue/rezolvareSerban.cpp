#include <iostream>

using namespace std;

int main() {
    int s[100];
    int c[100];
    int ss = -1;
    int inc=-1;
    int sc=-1;
    int n;

    cin >> n;
    while (n!=0) {
        ss++;
        s[ss] = n;
        cin >> n;
    }

    while (ss >= 0) {
        int x = s[ss];
        ss--;

        inc++;
        c[inc] = x;

        if (x % 2 == 0) {
            break;
        }
    }
    cout << "Elementele extrase din coada sunt:" << endl;
    // while (sc <= inc) {
    //     cout << c[sc] << " ";
    //     sc++;
    // }

    for (int i = 0; i < sc; i++) {
        cout << c[i] << ' ';
    }
    return 0;
}
