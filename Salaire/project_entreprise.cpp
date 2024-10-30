#include <iostream>
#include "Entreprise.h"

int main() {
    Entreprise entreprise;
    int choix;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Ajouter un salarié\n";
        std::cout << "2. Calculer le salaire total\n";
        std::cout << "3. Afficher tous les salariés\n";
        std::cout << "0. Quitter\n";
        std::cout << "Votre choix : ";
        std::cin >> choix;

        switch (choix) {
        case 1:
            entreprise.add_salarie();
            break;
        case 2: {
            double total = entreprise.Calcule_Total_Salaire();
            std::cout << "Salaire total de l'entreprise : " << total << std::endl;
            break;
        }
        case 3:
            entreprise.affiche_all_salaries();
            break;
        case 0:
            break;
        default:
            std::cout << "Mauvais choix." << std::endl;
        }
    } while (choix != 0);

    return 0;
}
