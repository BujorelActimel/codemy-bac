#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char s[20];
    int i;

    strcpy(s,"stilou"+4); // s = ou
    cout<<s<<' '; 
    strncpy(s,"stilou",4); s[4]='\0';
    for(i=0;i<4;i++) 
    if (i % 2==0 ) s[i]=s[0]+i-1;  s = rosu
    else 
    s[i]=s[0]+3*(2*i/3-1); 
    cout<<s;

    return 0;
}
// a b c d e f g h i j k l m n o p q r s t u v w x y z