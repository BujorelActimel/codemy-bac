#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char c1 = 'a';
    char c2 = 'z';

    char s[] = "barman";

    cout << (strchr(strchr(s, c1), c2)) != NULL;
}