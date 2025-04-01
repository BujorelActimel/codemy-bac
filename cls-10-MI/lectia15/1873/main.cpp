#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101];
    char c[101] = "";
    cin.get(s, 101);
    char* cuv=strtok(s," ");
    while(cuv){
        if(strlen(cuv)%2==0){
            strcat(c, "#");
            strcat(c, " ");
        }
        else{
            strcat(c, cuv);
            strcat(c, " ");
        }
        cuv = strtok(NULL, " ");
    }
    strcat(c, "\0");

    if(strchr(c, '#')!=NULL){
        cout << c << '\n';
    }
    else{
        cout<<"nu exista\n";
    }
    return 0;
}