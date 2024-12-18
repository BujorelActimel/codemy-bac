#include <iostream>
#include <cstring>

using namespace std;

// a = s a l u t ! \0 _ _ _

// cout << a -> s a l u t ! p q 4 m ???
//              s a l u t !

// strlen   -> lungimea unui string

// strcpy   -> copiaza din src in dest

// strncpy  -> copiaza din src in dest un anumit numar de caractere

// strchr   -> adresa la care il gaseste pe ch in string

// strstr   -> la fel, dar cauta un string

int strlenSerban(char s[]) {
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }

    return i;
}

void strcpyTudor(char dest[], char src[]) {
    int i = 0;
    for (i = 0; i < strlenSerban(src); i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

void strcpyBujor(char dest[], char src[], int n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

// a = "salut!";

// adresa lui a = 0xfc0



// char* b = strchr(a, "ut!");
// b = 0xfc3

// 0xfc3 - 0xfc0 = 3

a = "hello "

b = "world"

cout << strcat(a, b) -> "hello world"


int main() {
    char a[300] = "salut sunt stefan si am 15 ani, am priteni tari, nu ca tine da, boschetari!";

    cout << strlenSerban(a) << '\n';

    char b[10];

    char c[30] = "salut, din partea lui c";

    cout << c << '\n';

    strcpyBujor(b, a, strlen(b));

    cout << b << '\n';
    cout << c << '\n';

    return 0;
}


// byte = 8 bits // octet

// 01100101

