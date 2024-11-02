#include <iostream>

using namespace std;

// 814 -> 48 -> 84
// 418 -> 84

bool pao(int x, int y) {
    int x_nou = 0;  
    while (x != 0) {
        if (x % 2 == 0 && x % 10 != 0) {
            x_nou = x_nou * 10 + x % 10;
        }
        x /= 10;
    }
    while (x_nou != 0) {
        x = x * 10 + x_nou % 10;
        x_nou /= 10;
    }

    int y_nou = 0;  
    while (y != 0) {
        if (y % 2 == 0 && y % 10 != 0) {
            y_nou = y_nou * 10 + y % 10;
        }
        y /= 10;
    }

    return x == y_nou;
    
}

int main() {
    cout << pao(814, 7003485) << '\n';
    cout << pao(814, 7003486) << '\n';
    return 0;
}