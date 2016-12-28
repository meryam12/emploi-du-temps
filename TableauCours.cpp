#include "TableauCours.h"

TableauCours::TableauCours():d_cours{}
{
}

void TableauCours::ajouterCours(Cours * c)
{
	Creneau jC=c->creneau();
	int i=0;
	while(i<d_cours.size()&&jC<d_cours[i]->creneau())
	{
		i++;
	}
	//d_cours.insert(d_cours[i].begin()+i,c);
}
