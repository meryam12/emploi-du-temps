#ifndef JOUR_H
#define JOUR_H

class Jour
{
	public:
		enum jour_de_la_semaine {LUNDI,MARDI,MERCREDI,JEUDI,VENDREDI,SAMEDI,DIMANCHE };
		Jour(int num,jour_de_la_semaine j);
		Jour(const Jour&j)=default;
		Jour()=delete;
		bool operator > (const Jour & j)const;
		bool operator <(const Jour & j)const;
		bool operator ==(const Jour & j)const;
		bool operator !=(const Jour & j)const;
		//Jour operator=(const Jour & j)=default;
		int NumeroSemaine()const;
		jour_de_la_semaine JourSemaine()const;
	private:
		int d_numero_de_semaine;
		jour_de_la_semaine d_joursemaine;
};

#endif
