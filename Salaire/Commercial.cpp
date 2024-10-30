#include "Commercial.h"
#include "Employé.h"

Commercial::Commercial(std::string nom, double taux_horaire, int nb_heure, double commission, int total_vente)
	:Employé(nom,taux_horaire, nb_heure), commission(commission), total_vente(total_vente)
{
	this->salaire = Calcul_Salaire(); //calculer le salaire
	std::cout << "Ctor Commercial" << std::endl;
}

double Commercial::Calcul_Salaire()
{
	return Employé::salaire + this->commission * this->total_vente;
}

void Commercial::afficher() const
{
	std::cout << "nom : " << this->nom << " ; Salaire : " << this->salaire << std::endl;
}

Commercial::~Commercial()
{
	std::cout << "Dtor Commercial" << std::endl;
}
