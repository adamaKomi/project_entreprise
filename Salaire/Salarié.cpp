#include "Salarié.h"

Salarié::Salarié(std::string nom, double taux_horaire, int nb_heure)
	:nom(nom), taux_horaire(taux_horaire), nb_heure(nb_heure)
{
	this->salaire = this->taux_horaire * this->nb_heure;//claculer le salaire
	std::cout << "Ctor Salarié" << std::endl;
}

Salarié::~Salarié()
{
	std::cout << "Dtor Salarié" << std::endl;
}
