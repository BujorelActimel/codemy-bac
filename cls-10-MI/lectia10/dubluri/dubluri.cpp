#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256];
    int lungMax=0,iRasp=-1, jRasp=-1;
    cin>>s;
    for(int i=0; i<strlen(s); i++){
        for(int j=i; j<strlen(s); j++){
            char secvCurenta[j-i+2];
            strncpy(secvCurenta, s+i, j-i+1);
            secvCurenta[j-i+2] = '\0';
            if(strstr(s+i+1, secvCurenta)!=NULL){
                if(strlen(secvCurenta)>lungMax){
                    lungMax=strlen(secvCurenta);
                    iRasp=i;
                    jRasp=j;
                }
                else if (strlen(secvCurenta) == lungMax) {
                    char secvMaxima[lungMax+1];
                    strncpy(secvMaxima, s+iRasp, lungMax);
                    secvMaxima[lungMax+1] = '\0';
                    if (strcmp(secvCurenta, secvMaxima) < 0) {
                        iRasp = i;
                        jRasp = j;
                    }
                }
            }
        }
    }
    for(int i=iRasp; i<=jRasp; i++){
        cout<<s[i];
    }
    cout << '\n';
    return 0;
}
