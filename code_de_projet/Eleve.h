#ifndef ELEVE_H
#define ELEVE_H
#include "Personne.h"
#include<string>
using namespace std;

class Eleve : public Personne
{
	public:
		Eleve();
		Eleve(int matricule_,string nom_,string libelle_, Adresse adresse_);
		string getLibelle();
		void setLibelle(string new_libelle);
		~Eleve();
	private:
		string libelle;
};

#endif