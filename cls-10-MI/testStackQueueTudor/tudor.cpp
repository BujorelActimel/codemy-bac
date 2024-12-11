#include <iostream>
using namespace std;
///1) la final sunt 4 elemente in stiva 
///2) ultimul introdus in stiva: 4,ultimul introdus in coada 1
int main()
{
    ///3
    int s[100],c[100],vf=0,sf=1,inc=1;
    int n,cnt=0;
    cin>>n;
    while(n>=0)
    {
        s[vf]=n;
        vf++;
        cin>>n;
    }
    while(vf!=0)
    {                           // cnt trebuie resetat la 0 de fiecare data
        for (int i=1;i<n;i++) { // verifici cu varful stivei, nu cu n
            if(n%i==0)
                cnt++;
        }
        if (cnt==2)  // daca e prim trebuie sa opresti si daca nu, 
        {            // scoti din stiva, adaugi in coada si treci mai departe
            vf--; 
            c[sf]=n;
            sf++;
        }
    }
    while(vf!=0)
    {
        cout<< s[vf];  // spatii, capul stivei e la sf-1
        vf--;
    }
    while(sf>=inc)
    {
        cout<<c[inc];  // spatii
        sf--;          // nu e de ajuns sf--
                       // trebuie sters primul element
                       // sau sa cresti inc cu 1
    }
    return 0;
}
