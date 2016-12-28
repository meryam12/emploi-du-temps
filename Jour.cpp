#include "Jour.h"

Jour ::Jour(int num,jour_de_la_semaine j):d_numero_de_semaine{num} ,d_joursemaine{j} {}
bool Jour :: operator > (const Jour & j)const
{
	if(d_numero_de_semaine> j.d_numero_de_semaine) 
	{
	        return true;
     }
	else if(d_numero_de_semaine== j.d_numero_de_semaine)
	{
	       if(d_joursemaine > j.d_joursemaine)
	  {
	          return true;
     }
   }
	return false;
}
bool Jour :: operator < (const Jour & j)const
{
		if(d_numero_de_semaine< j.d_numero_de_semaine) 
	{
	        return true;
     }
	else if(d_numero_de_semaine== j.d_numero_de_semaine)
	{
	       if(d_joursemaine < j.d_joursemaine)
	  {
	          return true;
      }      
	}
	return false;
}
bool Jour::operator ==(const Jour & j)const
{
	return d_numero_de_semaine== j.d_numero_de_semaine && d_joursemaine==j.d_joursemaine;
}
bool Jour::operator !=(const Jour & j)const
{
	return !(*this==j);
}
int Jour::NumeroSemaine()const
{
	return d_numero_de_semaine;
}
Jour::jour_de_la_semaine Jour::JourSemaine()const
{
	return d_joursemaine;
}

