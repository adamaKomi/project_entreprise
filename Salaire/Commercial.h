#pragma once
#include "Employ�.h"
class Commercial : virtual public Employ�
{
protected:
	double commission;
	int total_vente;
	double salaire;
public:
	Commercial(std::string nom, double taux_horaire, int nb_heure, double commission, int total_vente);
	double Calcul_Salaire() override;
	void afficher() const override;
	~Commercial();
};

