#include <iostream>
#include <vector>

using namespace std;

int main() {
    int L, C;

    cout << "Le nombre de lignes : ";
    cin >> L;

    cout << "Le nombre de colonnes : ";
    cin >> C;

    vector<vector<int>> tab(L, vector<int>(C));

    // Saisie de la matrice
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cout << "Élément [" << i << "][" << j << "] : ";
            cin >> tab[i][j];
        }
    }

    int maxSomme = 0;
    vector<int> ligneMax;

    // Recherche de la ligne avec la somme maximale
    for (int i = 0; i < L; i++) {
        int somme = 0;
        for (int j = 0; j < C; j++) {
            somme += tab[i][j];
        }

        if (somme > maxSomme) {
            maxSomme = somme;
            ligneMax = tab[i];  // Sauvegarde de la ligne
        }
    }

    // Affichage du résultat
    cout << "La ligne avec la somme maximale est : [ ";
    for (int val : ligneMax) {
        cout << val << " ";
    }
    cout << "] avec une somme de : " << maxSomme << endl;

    return 0;
}
