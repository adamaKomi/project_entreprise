#pragma once
#include "Employé.h"
class Gestionnaire :
   virtual public Employé
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

