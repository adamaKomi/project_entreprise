#pragma once
#include <iostream>
#include "Salarié.h"
class Employé: public Salarié
{
protected:
	double salaire;
public:
	Employé(std::string nom,double taux_horaire, int nb_heure);
	double Calcul_Salaire() override;
	void afficher() const override;
	~Employé();
};

