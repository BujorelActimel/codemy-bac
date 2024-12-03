struct Coada {
    int n = 0; // numarul de elemente
    int elemente[10000];

    // push
    void push(int element) {
        elemente[n] = element;
        n++;
    }

    // pop - o sa elimine primul element si il si returneaza
    int pop() {
        int valoare = elemente[0];
        for (int i = 0; i < n - 1; i++) {
            elemente[i] = elemente[i+1];
        }
        n--;
        return valoare;
    }

    // eGoala - verifica daca coada e goala
    bool eGoala() {
        return n == 0;
    }
};
