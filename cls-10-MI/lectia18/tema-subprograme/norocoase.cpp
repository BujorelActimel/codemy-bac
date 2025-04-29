#include <iostream>

using namespace std;

int norocoase(int a, int b) {
    if (a % 2 && b % 2 == 1) {
        return (b-a+1)/2+1;
    }
    else {
        return (b-a+1)/2;
    }
}


int main() {
    int a, b;
    cin >> a >> b;

    cout << norocoase(a, b) << '\n';

    return 0;
}



// 1, 15

// 1^2 = 1
// 2^2 = nu
// 3^2 = suma 
// 4^2 = nu
// 5^2 = da
// 6 = 
// 7 = da
// 8 = nu
// 9 = da
// 10
// 11
// 12
// 13
// 14
// 15



// 5+6+7+8+9+10+11+12+13=81