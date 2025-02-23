#include <iostream>

using namespace std;

int main() {
    int taille;
    cout << "Entrez la taille du tableau : ";
    cin >> taille;
    int tab[taille];

    cout << "Entrez les elements du tableau :";
    for (int i = 0; i < taille; i++) {
        cout << "Donnez l'element n° " << i << " : ";
        cin >> tab[i];
    }

    int j = 0;
	for (int i = 0; i < taille; i++) {
		if (tab[i] % 2 == 0) {
			int temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
			j++;
		}
	}

    cout << "Tableau trie : ";
    for (int i = 0; i < taille; i++) {
        cout << tab[i] << " ";
    }

    return 0;
}
