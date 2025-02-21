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
            cout << "�l�ment [" << i << "][" << j << "] : ";
            cin >> tab[i][j];
        }
    }

    bool res = false;

    // V�rification de la condition de permutation
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C - 1; j++) {
            if (tab[i][j + 1] == tab[i][j] + 1) {
                res = true;
                break; // Sortir d�s qu'on trouve une permutation
            }
        }
        if (res) break; // Si on a trouv�, on arr�te
    }

    // Affichage du r�sultat
    if (res) {
        cout << "C'est une permutation." << endl;
    } else {
        cout << "Ce n'est pas une permutation." << endl;
    }

    return 0;
}
