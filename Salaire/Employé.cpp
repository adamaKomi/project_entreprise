#include "Employé.h"
#include "Salarié.h"

Employé::Employé(std::string nom, double taux_horaire, int nb_heure)
    : Salarié(nom, taux_horaire, nb_heure)
{
    this->salaire = this->Calcul_Salaire();
    std::cout << "Ctor Employé" << std::endl;
}

double Employé::Calcul_Salaire()
{
    return this->nb_heure * this->taux_horaire;
}

void Employé::afficher() const
{
    std::cout << "Nom : " << this->nom << " ; Salaire : " << this->salaire << std::endl;
}

Employé::~Employé()
{
    std::cout << "Dtor Employé" << std::endl;
}
