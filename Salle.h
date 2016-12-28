#ifndef SALLE_H
#define SALLE_H
#include <iostream>
class Salle
{
	public:
	Salle()=default;
	Salle(int num,const std::string& bat);
	private:
		int d_numero;
		std::string d_batiment;
};

#endif
