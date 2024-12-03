#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char s[11];
    cin >> s;

    for (int i = 0; i < strlen(s); i++) {
        for (int c = 0; c < strlen(s) - i; c++) {
            cout << s[c];
        }
        cout << '\n';
    }

    for (int i = 0; i < strlen(s); i++) {
        for (int c = i; c < strlen(s); c++) {
            cout << s[c];
        }
        cout << '\n';
    }

    return 0;
}

// s = "program"

// // prefixe
// 0 .. len-0
// 0 .. len-1
// 0 .. len-2
//   ...
// 0 .. len-len

// // sufixe
// 0 .. len
// 1 .. len
// 2 .. len
// 3 .. len
// ...
// len .. len

// "program"

// stiva:
// "prog"
// "pro"
// "pr"
// "p"


// "program"
// "progra"
// "progr"