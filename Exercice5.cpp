#include <iostream>

using namespace std;

int main() {
    int taille;
    cout << "Entrez la taille du tableau carr    (N) : ";
    cin >> taille;

    int tableau[taille][taille];
    int tailleCarree = taille * taille;
    bool present[tailleCarree + 1] = false;

    cout << "Entrez les elements du tableau :" ;
    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {
            cin >> tableau[i][j];
        }
    }

    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {
            int nombre = tableau[i][j];
            if (nombre < 1 || nombre > tailleCarree || present[nombre]) {
                cout << "Ce n'est pas une permutation.";
                return 0;
            }
            present[nombre] = true;
        }
    }

    cout << "C'est une permutation.";
    return 0;
}
