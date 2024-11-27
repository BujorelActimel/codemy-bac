#include <fstream>
#include <queue>
using namespace std;

const int NMAX = 1001;

struct Pozitie {
    int x, y;
    Pozitie(int x_, int y_) {
        x = x_;
        y = y_;
    }
};

int matrice[NMAX][NMAX];
int distante[NMAX][NMAX];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int gasesteDrumMinim(int n, int m, int start_x, int start_y, int final_x, int final_y) {
    // Verificam daca pozitiile de start si final sunt valide
    if (start_x < 0 || start_x >= n || start_y < 0 || start_y >= m ||
        final_x < 0 || final_x >= n || final_y < 0 || final_y >= m ||
        matrice[start_x][start_y] == 1 || matrice[final_x][final_y] == 1) {
        return -1;
    }
    
    // Initializam matricea de distante cu -1
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            distante[i][j] = -1;
        }
    }
    
    distante[start_x][start_y] = 0;
    
    queue<Pozitie> coada;
    coada.push(Pozitie(start_x, start_y));
    
    while (!coada.empty()) {
        Pozitie current = coada.front();
        coada.pop();
        
        if (current.x == final_x && current.y == final_y) {
            return distante[current.x][current.y];
        }
        
        for (int i = 0; i < 4; i++) {
            int new_x = current.x + dx[i];
            int new_y = current.y + dy[i];
            
            if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < m && 
                matrice[new_x][new_y] == 0 && distante[new_x][new_y] == -1) {
                
                distante[new_x][new_y] = distante[current.x][current.y] + 1;
                coada.push(Pozitie(new_x, new_y));
            }
        }
    }
    
    return -1;
}

int main() {
    ifstream fin("roboti.in");
    ofstream fout("roboti.out");
    
    // Citim dimensiunile matricei
    int n, m;
    fin >> n >> m;
    
    // Citim matricea
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fin >> matrice[i][j];
        }
    }
    
    // Citim coordonatele
    int start_x, start_y, final_x, final_y;
    fin >> start_x >> start_y;
    fin >> final_x >> final_y;
    
    // Ajustam coordonatele pentru ca indexarea incepe de la 0
    start_x--; start_y--;
    final_x--; final_y--;
    
    // Rezolvam problema
    int rezultat = gasesteDrumMinim(n, m, start_x, start_y, final_x, final_y);
    
    // Scriem rezultatul
    fout << rezultat << "\n";
    
    fin.close();
    fout.close();
    
    return 0;
}