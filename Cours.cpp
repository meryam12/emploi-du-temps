#include "Cours.h"

Cours::Cours(const Creneau& c):d_enseignant{},d_formation{},d_salle{},d_creneau{c}
{
}
Cours::Cours(const Enseignant& e,const Formation& f,const Salle& s,const Creneau&c):d_enseignant{e},d_formation{f},d_salle{s},d_creneau{c}
{
}

Enseignant Cours::enseignant()const
{
	return d_enseignant;
}
Formation Cours::formation()const
{
	return d_formation;
}
Salle Cours::salle()const
{
	return d_salle;
}
Creneau Cours::creneau()const
{
	return d_creneau;
}
