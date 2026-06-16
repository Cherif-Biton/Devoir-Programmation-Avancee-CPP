#include<iostream>
#include "Eleve.h"
using namespace std;

Eleve::Eleve():Personne(),libelle("")
{
}

Eleve::Eleve(int matricule,string nom,string libelle_, Adresse adresse_):Personne(matricule,nom, adresse_),libelle(libelle_)
{	

}

string Eleve::getLibelle(){
	return libelle;
}

void Eleve::setLibelle(string new_libelle){
	libelle=new_libelle;
}

Eleve::~Eleve()
{

}