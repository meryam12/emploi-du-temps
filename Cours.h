#ifndef COURS_H
#define COURS_H
#include <iostream>
#include <vector>
#include "Enseignant.h"
#include "Formation.h"
#include "Salle.h"
#include "Creneau.h"
class Cours
{
	public:
		Cours(const Creneau& c);
		Cours(const Enseignant& e,const Formation& f,const Salle& s,const Creneau&c);
		Enseignant enseignant()const;
		Formation formation()const;
		Salle salle()const;
		Creneau creneau()const;
	private:
		Enseignant d_enseignant;
		Formation d_formation;
		Salle d_salle;
		Creneau d_creneau;
};

#endif
