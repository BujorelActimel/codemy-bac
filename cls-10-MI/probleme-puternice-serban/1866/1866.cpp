#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("prosir.in");
    ofstream fout("prosir.out");
    char sir[201];
    fin.get(sir,201);
    for (int i=0; i<strlen(sir); i++){
        if (sir[i]==' ' ||sir[i]=='.'){      // am schimbat din " " in ' ' si "." in '.'
            sir[i-1]='5';                    // nu e corecta inca problema dar compileaza
        }
    }
    fout<<sir;
    fin.close();
    fout.close();
    return 0;
}