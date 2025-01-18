// asta e codul de la alta problema, citeste iar cerinta
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char nume[21];
    char prenume [21];
    char rezultat[42];
    char vocale[]="aeiouAEIOU";
    int k=0;
    cin>>nume>>prenume;
    for (int i=0; i<strlen(prenume); i++){
        if(strchr(vocale, prenume[i])==NULL){
            rezultat[k]=prenume[i];
            k++;
        }
    }
    rezultat[k]='\0';
    strcat(rezultat, " ");
    strcat(rezultat, nume);
    cout<<rezultat;
    return 0;
}
