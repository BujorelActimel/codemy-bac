#include <iostream>

using namespace std;

int cmmdc(int a, int b) {
    if (a == b) { // cazul de baza
        return a;
    }

    if (a > b) {
        return cmmdc(a-b, b); // pasul recursiv
    }
    else {
        return cmmdc(a, b-a); // pasul recursiv
    }
}

int main() {
    cout << cmmdc(24, 36) << '\n';

    return 0;
}
