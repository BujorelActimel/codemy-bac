#include <iostream>

using namespace std;

int main() {
    int u=1, x = 231;
    while(x!=0)
    { 
        u=u*(x%10);
        x=x/10;
    }
    cout << u << '\n';
}

Raspuns: b)