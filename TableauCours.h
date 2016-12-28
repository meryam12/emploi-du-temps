#ifndef TABLEAUCOURS_H
#define TABLEAUCOURS_H
#include <iostream>
#include <vector>
#include "Cours.h"
#include "Creneau.h"
class TableauCours
{
	public:
		TableauCours();
		~TableauCours();
		
		void ajouterCours( Cours * c);
		void supprimerCours(const Creneau& c);
	private:
		std::vector<Cours*> d_cours;
};

#endif
