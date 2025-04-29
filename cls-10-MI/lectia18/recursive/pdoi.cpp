#include <iostream>

using namespace std;

int PDoi(int n) {
    if (n == 1) {
        return 1;
    }

    if (n % 2 != 0) {
        return 0;
    }

    return PDoi(n / 2);

}

int main() {
    cout << PDoi(128) <<'\n';

    return 0;
}
