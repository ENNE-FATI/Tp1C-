#include <iostream>
#include <vector>

using namespace std;

int main() {
    int taille;

    cout << "Veuillez saisir la taille du tableau: ";
    cin >> taille;

    vector<int> tab(taille);

    for (int i = 0; i < taille; i++) {
        cout << "Donnez l'element n° " << i << " : ";
        cin >> tab[i];
    }

    for (int i = 0; i < taille - 1; i++) {
        int j = i + 1;
        while (j < taille && tab[i] != tab[j]) {
            j++;
        }
        bool exist = true;
        for (int k = 0; k < i; k++) {
            if (tab[k] == tab[i]) {
                exist = false;
                break;
            }
        }
        if (j == taille && exist) {
            cout << tab[i] << endl;
        }
    }

    return 0;
}
