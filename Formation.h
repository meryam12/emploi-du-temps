#ifndef FORMATION_H
#define FORMATION_H
#include <iostream>
class Formation
{
	public:
		Formation()=default;
		Formation(const std::string& intitule);
	private:
		std::string d_intitule;
};

#endif
