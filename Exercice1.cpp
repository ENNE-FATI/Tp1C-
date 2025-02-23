#include <iostream>

using namespace std;

int main() {
    int taille;
    cout << "Entrez la taille du tableau : ";
    cin >> taille;
    int tableau[taille];

    cout << "Entrez les elements du tableau :";
    for (int i = 0; i < taille; i++) {
        cout << "L'element de "<< i << ":";
        cin >> tableau[i];
    }

    int unique = 0;

    for (int i = 0; i < taille; i++) {
        int compteur = 0;
        for (int j = 0; j < taille; j++) {
            if (tableau[i] == tableau[j]) {
                compteur++;
            }
        }
        if (compteur == 1) {
            unique = tableau[i];
            break;
        }
    }

    if (unique != 0) {
        cout << "Le nombre unique est : " << unique;
    } else {
        cout << "Aucun nombre unique trouve dans le tableau.";
    }

    return 0;
}
