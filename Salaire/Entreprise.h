#pragma once
#include "Salari�.h"

class Entreprise
{
private:
	Salari�** Salaries;
	int nb_salarie;
	int max_salarie;
public:
	Entreprise();
	void add_salarie();
	void resize();
	double Calcule_Total_Salaire();
	void affiche_all_salaries() const;
	~Entreprise();
};

