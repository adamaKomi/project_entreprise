#pragma once
#include <iostream>
#include "Salari�.h"
class Employ�: public Salari�
{
protected:
	double salaire;
public:
	Employ�(std::string nom,double taux_horaire, int nb_heure);
	double Calcul_Salaire() override;
	void afficher() const override;
	~Employ�();
};

