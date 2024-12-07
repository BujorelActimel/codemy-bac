struct Coada {
    int elemente[100];
    int nrElemente = 0;

    bool isEmpty() {
        return nrElemente == 0;
    }

    void push(int element) {
        elemente[nrElemente] = element;
        nrElemente++;
    }

    int pop() {
        int valoare = elemente[0];
        for (int i = 0; i < nrElemente - 1; i++) {
            elemente[i] = elemente[i+1];
        }
        nrElemente--;
        return valoare;
    }
};
