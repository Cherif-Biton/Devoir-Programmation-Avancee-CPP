#include <iostream>
#include "Personne.h"
using namespace std;

Personne::Personne() : matricule(0), nom(""), adresse(Adresse())
{

}

Personne::Personne(int matricule_ ,string nom_, Adresse adresse_)
{
	matricule=matricule_;
	nom=nom_;
	adresse= adresse_;
}

int Personne::getMatricule(){
	return matricule;
}

void Personne::setMatricule(int new_matricule){
	matricule=new_matricule;
}

string  Personne::getNom(){
	return nom;
}

void Personne::setNom(string new_nom){
	nom=new_nom;
}

Adresse Personne::getAdresse(){
    return adresse;
}

void Personne::setAdresse(Adresse new_adresse){
    adresse = new_adresse;
}

Personne::~Personne()
{
	
}