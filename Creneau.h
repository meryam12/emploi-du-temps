#ifndef CRENEAU_H
#define CRENEAU_H
#include "Jour.h"
class Creneau:public Jour
{
	public:
		enum horaires {d8H_10H,d10H_12H,d14H_16H,d16H_18H};
		Creneau()=delete;
		Creneau(const Creneau& c)=default;
		Creneau(const Jour& j,horaires h);
		Jour jour()const;
		bool operator ==(const Creneau&c)const;
		bool operator !=(const Creneau&c)const;
		bool operator >(const Creneau&c)const;
		bool operator <(const Creneau&c)const;
	private:
		horaires d_horaire;
};

#endif
