#pragma once
#include "Salarié.h"

class Entreprise
{
private:
	Salarié** Salaries;
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

