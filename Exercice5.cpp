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

    bool res = false;

    // Vérification de la condition de permutation
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C - 1; j++) {
            if (tab[i][j + 1] == tab[i][j] + 1) {
                res = true;
                break; // Sortir dès qu'on trouve une permutation
            }
        }
        if (res) break; // Si on a trouvé, on arrête
    }

    // Affichage du résultat
    if (res) {
        cout << "C'est une permutation." << endl;
    } else {
        cout << "Ce n'est pas une permutation." << endl;
    }

    return 0;
}
