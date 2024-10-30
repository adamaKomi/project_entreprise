#include "Gestionnaire.h"
#include "Employé.h"

Gestionnaire::Gestionnaire(std::string nom, double taux_horaire, int nb_heure, double salaire_hebdomadaire)
	:Employé(nom,taux_horaire,nb_heure), salaire_hebdomadaire(salaire_hebdomadaire)
{
	this->salaire = Calcul_Salaire();
	std::cout << "Ctor Gestionnaire" << std::endl;
}

double Gestionnaire::Calcul_Salaire()
{
	return Employé::salaire + this->salaire_hebdomadaire*4;//4 semaines dans le mois
}

void Gestionnaire::afficher() const
{
	std::cout << "nom : " << this->nom << " ; Salaire : " << this->salaire << std::endl;
}

Gestionnaire::~Gestionnaire()
{
	std::cout << "Dtor Gestionnaire" << std::endl;
}
