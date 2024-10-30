#pragma once
#include "Employ�.h"
class Gestionnaire :
   virtual public Employ�
{
protected:
    double salaire_hebdomadaire;
    double salaire;
public:
    Gestionnaire(std::string nom, double taux_horaire, int nb_heure, double salaire_hebdomadaire);
    double Calcul_Salaire() override;
    void afficher() const override;
    ~Gestionnaire();
};

