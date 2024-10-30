#pragma once
#include "Gestionnaire.h"
#include "Commercial.h"

class Gest_Commercial : public Gestionnaire, public Commercial
{
private:
	double salaire;
public :
	Gest_Commercial(std::string nom, double taux_horaire, int nb_heure, double salaire_hebdomadaire, double commission, int total_vente);
	double Calcul_Salaire() override;
	void afficher() const override;
	~Gest_Commercial();
};

