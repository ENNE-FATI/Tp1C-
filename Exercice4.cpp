#include <iostream>

using namespace std;

int main() {
    int L, C;
    cout << "Le nombre de lignes sont: ";
    cin >> L;
    cout << "Le nombre de colonnes sont: ";
    cin >> C;

    int tab[L][C];

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cout << "Element [" << i << "][" << j << "] : ";
            cin >> tab[i][j];
        }
    }

    int maxSomme = 0;
    int ligneMax[C];

    for (int i = 0; i < L; i++) {
        int somme = 0;
        for (int j = 0; j < C; j++) {
            somme += tab[i][j];
        }
        if (somme > maxSomme) {
            maxSomme = somme;
            for (int j = 0; j < C; j++) {
                ligneMax[j] = tab[i][j];
            }
        }
    }

    cout << "La ligne avec la somme maximale est : [ ";
    for (int j = 0; j < C; j++) {
        cout << ligneMax[j] << " ";
    }
    cout << "] avec une somme de : " << maxSomme;

    return 0;
}
