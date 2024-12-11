//Se dau n puncte în plan prin cele două coordonate (x/y).
//a. Să se determine câte din aceste puncte se găsesc pe axa OX.
//b. Să se afișeze punctele cele mai îndepărtate față de origine.
//c. Să se afișeze punctele ordonate crescător după distanța lor față de origine.

#include <iostream>

using namespace std;

struct Coordonate{
    int x, y;
};

int main()
{
    int n;
    cin>>n;
    Coordonate coordonate;
    Coordonate coordUrm;
    int apartinAbscisei=0;
    int distantaMax=0;
    int punctmaxOX=0;
    int punctmaxOy=0;
    int punctmaxOXEGALE=0;
    int punctmaxOYEGALE=0;
    for (int i=0; i<n; i++){
        cin>>coordonate.x>>coordonate.y;
        if(coordonate.y==0){
            apartinAbscisei++;
        }
    }
    cout<<"Raspunsul punctului a este: "<<apartinAbscisei<<endl;
    for (int i=0; i<n; i++){
        cin>>coordonate.x>>coordonate.y;    // deja ai citit coordonatele mai sus
        if (((coordonate.x)*(coordonate.x)+(coordonate.y)*(coordonate.y) )== distantaMax){
            punctmaxOXEGALE=punctmaxOX;
            punctmaxOYEGALE=punctmaxOy;
        }
        if (coordonate.x*coordonate.x+coordonate.y*coordonate.y > distantaMax){
            distantaMax = (coordonate.x*coordonate.x+coordonate.y*coordonate.y);
            punctmaxOX = coordonate.x;
            punctmaxOy = coordonate.y;
        }
    }
    if((punctmaxOXEGALE!=0) || (punctmaxOYEGALE!=0)){
         cout<<"Pentru punctul b raspunsul sunt punctele: "<<punctmaxOX<<" "<<punctmaxOy<<"Dar si "<<punctmaxOXEGALE<<" "<<punctmaxOYEGALE<<endl;
    }
    else{
        cout<<"Pentru punctul b raspunsul sunt punctele: "<<punctmaxOX<<" "<<punctmaxOy;
    }
  for (int i=0; i<n; i++){
      cin>>coordonate.x>>coordonate.y;   // la fel
        for (int j=i; j<=n; j++){        // de la i + 1
            cin>>coordUrm.x>>coordUrm.y;  // la fel
            if(coordUrm.x*coordUrm.x+coordUrm.y*coordUrm.y < coordonate.x*coordonate.x+coordonate.y*coordonate.y){
                swap(coordonate.x,coordUrm.x);   // le schimbi o data
                swap(coordonate.y,coordUrm.y);   // si dupa le schimbi iar???
            }
        }
    }
    cout<<"Raspunsul punctului c este: ";
    for (int i=0; i<n; i++){
        cout<<coordonate.x<<" "<<coordonate.y;
    }
    return 0;
}
