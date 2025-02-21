#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, taille;

    cout << "Veuillez saisir la donnee : ";
    cin >> n;

    cout << "Veuillez saisir la taille du tableau : ";
    cin >> taille;

    vector<int> tab(taille);

    for (int i = 0; i < taille; i++) {
        cout << "Donnez l'element n° " << i << " : ";
        cin >> tab[i];
    }

    cout << "Paires dont la somme est " << n << " : " << endl;
    for (int i = 0; i < taille; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (tab[i] + tab[j] == n) {
                cout << "(" << tab[i] << ", " << tab[j] << ")" << endl;
            }
        }
    }

    return 0;
}
