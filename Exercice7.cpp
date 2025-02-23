#include <iostream>

using namespace std;

int main() {
    int nombreLignes;
    cout << "Entrez le nombre de lignes : ";
    cin >> nombreLignes;

    int taillesLignes[nombreLignes];
    int tableau[nombreLignes][100];

    for (int i = 0; i < nombreLignes; i++) {
        cout << "Entrez la taille de la ligne " << (i + 1) << " : ";
        cin >> taillesLignes[i];
        cout << "Entrez les elements de la ligne " << (i + 1) << " : ";
        for (int j = 0; j < taillesLignes[i]; j++) {
            cin >> tableau[i][j];
        }
    }

    int maxSomme = 0;
    int ligneMax = 0;

    for (int i = 0; i < nombreLignes; i++) {
        int somme = 0;
        for (int j = 0; j < taillesLignes[i]; j++) {
            somme += tableau[i][j];
        }
        if (somme > maxSomme) {
            maxSomme = somme;
            ligneMax = i + 1;
        }
    }

    cout << "La ligne avec la plus grande somme est la ligne " << ligneMax << " avec une somme de " << maxSomme;
    return 0;
}
