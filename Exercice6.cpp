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

    for (int i = 0; i < nombreLignes; i++) {
        int somme = 0;
        for (int j = 0; j < taillesLignes[i]; j++) {
            somme += tableau[i][j];
        }
        cout << "Somme de la ligne " << (i + 1) << " est : " << somme <<"\n";
    }

    return 0;
}
