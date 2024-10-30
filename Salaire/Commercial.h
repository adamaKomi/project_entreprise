#pragma once
#include "Employé.h"
class Commercial : virtual public Employé
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

