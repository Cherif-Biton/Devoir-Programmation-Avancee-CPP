#ifndef PERSONNE_H
#define PERSONNE_H
#include<string>
#include "Adresse.h"
using namespace std;

class Personne
{
	public:
		Personne();
		Personne(int matricule_ ,string nom_, Adresse adresse_);
		int getMatricule();
		void setMatricule(int new_matricule);
		string getNom();
		void setNom(string new_nom);
		Adresse getAdresse();
		void setAdresse(Adresse new_adresse);
		~Personne();
	private:
		int matricule;
		string nom;
		Adresse adresse;
};

#endif