#include "Entreprise.h"
#include <iostream>
#include "Salari�.h"
#include "Employ�.h"
#include "Commercial.h"
#include "Gestionnaire.h"
#include "Gest_Commercial.h"


Entreprise::Entreprise()
    :max_salarie(10), nb_salarie(0)
{
    this->Salaries = new Salari� * [max_salarie];
    for (int i = 0; i < this->max_salarie; i++) {
        this->Salaries[i] = nullptr;
    }
    std::cout << "Ctor Entreprise" << std::endl;
}


void Entreprise::add_salarie() {
    if (nb_salarie == max_salarie) {
        resize();
    }

    std::string nom;
    double taux_horaire;
    int nb_heure;

    std::cout << "Nom du salari� : ";
    std::cin >> nom;
    std::cout << "Taux horaire : ";
    std::cin >> taux_horaire;
    std::cout << "Nombre d'heures : ";
    std::cin >> nb_heure;

    int type;
    std::cout << "\n\nType de salari� \n1: Employ� \n2: Commercial \n3: Gestionnaire \n4: Gest_Commercial\n>> ";
    std::cin >> type;

    switch (type) {
    case 1: // Employ�
        Salaries[this->nb_salarie++] = new Employ�(nom, taux_horaire, nb_heure);
        break;
    case 2: // Commercial
    { 
        double commission;
        int total_vente;
        std::cout << "Commission : ";
        std::cin >> commission;
        std::cout << "Total des ventes : ";
        std::cin >> total_vente;
        Salaries[this->nb_salarie++] = new Commercial(nom, taux_horaire, nb_heure, commission, total_vente);
        break;
    }
    case 3: // Gestionnaire
    { 
        double salaire_hebdomadaire;
        std::cout << "Salaire hebdomadaire : ";
        std::cin >> salaire_hebdomadaire;
        Salaries[this->nb_salarie++] = new Gestionnaire(nom, taux_horaire, nb_heure, salaire_hebdomadaire);
        break;
    }
    case 4: // Gest_Commercial
    { 
        double salaire_hebdomadaire, commission;
        int total_vente;
        std::cout << "Salaire hebdomadaire : ";
        std::cin >> salaire_hebdomadaire;
        std::cout << "Commission : ";
        std::cin >> commission;
        std::cout << "Total des ventes : ";
        std::cin >> total_vente;
        Salaries[this->nb_salarie++] = new Gest_Commercial(nom, taux_horaire, nb_heure, salaire_hebdomadaire, commission, total_vente);
        break;
    }
    default:
        std::cout << "Type de salari� invalide." << std::endl;
    }
}

void Entreprise::resize() {
    max_salarie *= 2; 
    Salari�** new_tab = new Salari� * [max_salarie];
    for (int i = 0; i < this->nb_salarie; ++i) {
        new_tab[i] = this->Salaries[i];
    }
    for (int i = this->nb_salarie; i < this->max_salarie; ++i) {
        new_tab[i] = this->Salaries[i] = nullptr;
    }
    delete[] this->Salaries;
    this->Salaries = new_tab;
}


double Entreprise::Calcule_Total_Salaire() {
    double total = 0;
    for (int i = 0; i < this->nb_salarie; ++i) {
        this->Salaries[i]->Calcul_Salaire();
        total += this->Salaries[i]->Calcul_Salaire();
    }
    return total;
}

void Entreprise::affiche_all_salaries() const {
    for (int i = 0; i < nb_salarie; ++i) {
        this->Salaries[i]->afficher();
    }
}

Entreprise::~Entreprise() {
    for (int i = 0; i < this->nb_salarie; ++i) {
        delete this->Salaries[i]; 
        this->Salaries[i] = nullptr;
    }
    delete[] Salaries; 
    std::cout << "Dtor Entreprise" << std::endl;
}
