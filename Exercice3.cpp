#include <iostream>
#include <vector>

using namespace std;

int main() {
    int taille;

    cout << "Entrez la taille du tableau: ";
    cin >> taille;

    vector<int> tab(taille);

    for (int i = 0; i < taille; i++) {
        cout << "L'element de " << i << " est: ";
        cin >> tab[i];
    }

    int j = 0;
    for (int i = 0; i < taille; i++) {
        if (tab[i] % 2 == 0) {
            swap(tab[i], tab[j]);
            j++;
        }
    }

    cout << "Tableau modifie : " << endl;
    for (int i = 0; i < taille; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}
