#include <iostream>

using namespace std;

int sufmax(int n) {
    if (n < 10) return n;

    if (n % 10 != n / 10 % 10) {
        return n % 10;
    }
    return 10 * sufmax(n / 10) + n % 10;
}

int main() {
    cout << sufmax(459000) <<'\n';
    cout << sufmax(45955) <<'\n';
    cout << sufmax(45953) <<'\n';
    cout << sufmax(777) <<'\n';
    return 0;
}
