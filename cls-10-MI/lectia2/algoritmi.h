// 5 9 23 11 10 9
//     ^
//         ^
void sort(int vector[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vector[i] > vector[j]) {
                int aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}

// 3 7 11 14 15 18 18 19 22 22 23 25 
                    

void stergeDuplicate(int vector[], int &n) {
    for (int i = 0; i < n-1; i++) {
        if (vector[i] == vector[i+1]) {
            for (int j = i; j < n - 1; j++) {
                vector[j] = vector[j+1];
            }
            n--;
            i--;
        }
    }
}
