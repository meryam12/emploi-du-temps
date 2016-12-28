#include "Enseignant.h"
Enseignant::Enseignant(const string& nom,const string& prenom): d_nom{nom},d_prenom{prenom}
{
}
string Enseignant::nom()const
{
	return d_nom;
}
string Enseignant::prenom()const
{
	return d_prenom;
}
