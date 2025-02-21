#include <iostream>
#include <vector>

using namespace std;

int main() {
    int L, C;

    cout << "Le nombre de lignes : ";
    cin >> L;

    vector<vector<int>> tab(L);

    // Saisie de la matrice irrégulière
    for (int i = 0; i < L; i++) {
        cout << "Le nombre des colonnes pour la ligne " << i << " : ";
        cin >> C;

        tab[i].resize(C); // Allouer l'espace pour cette ligne

        for (int j = 0; j < C; j++) {
            cout << "Élément [" << i << "][" << j << "] : ";
            cin >> tab[i][j];
        }
    }

    // Détermination de la ligne avec la somme maximale
    int maxSomme = 0;
    int indexMax = 0;

    for (int i = 0; i < L; i++) {
        int somme = 0;
        for (int j = 0; j < tab[i].size(); j++) {
            somme += tab[i][j];
        }
        if (somme > maxSomme) {
            maxSomme = somme;
            indexMax = i;
        }
    }

    cout << "La ligne avec la plus grande somme est : " << indexMax
         << " avec une somme de " << maxSomme << endl;

    return 0;
}
