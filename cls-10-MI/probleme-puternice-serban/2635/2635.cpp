#include <iostream>
#include <fstream>   // erau 2 cstring, nu era fstream
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("capslock.in");
    ofstream fout("capslock.out");
    char c[256];
    char rez[256];
    fin.get(c, 256);

    bool capsLockOn = false;
    int k = 0;

    for(int i=0; i<strlen(c); i++){
        if(c[i]=='#'){
            capsLockOn = !capsLockOn; // turn on sau off
        } else if (c[i] >= 'a' && c[i] <= 'z' && capsLockOn) { // daca e litera mica si am caps lock on
            rez[k++] = c[i] - ('a'-'A');  // transforma in litera mare
        } else {
            rez[k++] = c[i];      // daca e altceva pastreaza
        }
    }

    rez[k] = '\0';

    fout<<rez;
    fin.close();
    fout.close();
    return 0;
}