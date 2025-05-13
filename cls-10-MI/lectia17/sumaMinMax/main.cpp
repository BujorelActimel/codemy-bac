int* sumaMinMax(int v[], int n) {
    int* rez = (int*)malloc(2 * sizeof(int));

    int suma = v[0], max = v[0], min = v[0];

    for (int i = 1; i < n; i++) {
        suma += v[i];
        if (v[i] > max) {
            max = v[i];
        }
        if (v[i] < min) {
            min = v[i];
        }
    }

    rez[0] = suma - max;
    rez[1] = suma - min;

    return rez;
}
