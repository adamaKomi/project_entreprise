#pragma once
#include <iostream>
class Salarié
{
protected:
	std::string nom;
	double taux_horaire;
	int nb_heure;
	double salaire;
	
public:
	Salarié(std::string nom, double taux_horaire, int nb_heure);
	virtual double Calcul_Salaire() =0;
	virtual void afficher() const =0;
	~Salarié();
};

