#include "Employ�.h"
#include "Salari�.h"

Employ�::Employ�(std::string nom, double taux_horaire, int nb_heure)
    : Salari�(nom, taux_horaire, nb_heure)
{
    this->salaire = this->Calcul_Salaire();
    std::cout << "Ctor Employ�" << std::endl;
}

double Employ�::Calcul_Salaire()
{
    return this->nb_heure * this->taux_horaire;
}

void Employ�::afficher() const
{
    std::cout << "Nom : " << this->nom << " ; Salaire : " << this->salaire << std::endl;
}

Employ�::~Employ�()
{
    std::cout << "Dtor Employ�" << std::endl;
}
