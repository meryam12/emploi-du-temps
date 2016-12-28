#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include <iostream>
#include <vector>
using std::string;
class Enseignant
{
	public:
		Enseignant()=default;
		Enseignant(const string& nom,const string& prenom);
		string nom()const;
		string prenom()const;
		
	private:
		string d_nom,d_prenom;;
};

#endif
