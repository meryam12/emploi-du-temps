#include "Creneau.h"

Creneau::Creneau(const Jour& j,horaires h):Jour{j},d_horaire{h}
{
}
Jour Creneau::jour()const
{ 
  return Jour(NumeroSemaine(),JourSemaine());
}
bool Creneau::operator ==(const Creneau&c)const
{
	return (jour()==c.jour()&&d_horaire==c.d_horaire);
}
bool Creneau::operator !=(const Creneau&c)const
{
	return !(*this==c);
}
bool Creneau::operator >(const Creneau&c)const
{
	if(jour()>c.jour())
	{
		return true;
	}
	else if(jour()==c.jour())
	{
		return d_horaire>c.d_horaire;
	}
	return false;
}
bool Creneau::operator <(const Creneau&c)const
{
	if(jour()<c.jour())
	{
		return true;
	}
	else if(jour()==c.jour())
	{
		return d_horaire<c.d_horaire;
	}
	return false;
}
