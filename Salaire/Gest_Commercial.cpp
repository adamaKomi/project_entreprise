#include "Gest_Commercial.h"
#include "Gestionnaire.h"
#include "Commercial.h"

Gest_Commercial::Gest_Commercial(std::string nom, double taux_horaire, int nb_heure, double salaire_hebdomadaire, double commission, int total_vente)
	:Employé(nom,taux_horaire,nb_heure),
	Gestionnaire(nom, taux_horaire, nb_heure, salaire_hebdomadaire), 
	Commercial(nom,taux_horaire,nb_heure,commission,total_vente)
{
	this->salaire = Calcul_Salaire();
	std::cout << "Ctor Gest_Commercial" << std::endl;
}

double Gest_Commercial::Calcul_Salaire()
{
	return Employé::salaire + this->commission * this->total_vente + this->salaire_hebdomadaire * 4;
}

void Gest_Commercial::afficher() const
{
	std::cout << "nom : " << this->nom << " ; Salaire : " << this->salaire << std::endl;
}

Gest_Commercial::~Gest_Commercial()
{
	std::cout << "Dtor Gest_Commercial" << std::endl;
}
