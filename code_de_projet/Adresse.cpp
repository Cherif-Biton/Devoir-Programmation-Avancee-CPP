#include <iostream>
#include "Adresse.h"
using namespace std;

Adresse::Adresse()
{
	porte=0;
	secteur="";
	tel="";
	num_rue=0;
}

Adresse::Adresse(int porte_a,string secteur_a ,string tel_a ,int num_rue_a)
{
	porte=porte_a;
	secteur=secteur_a;
	tel=tel_a;
	num_rue=num_rue_a;
	
}

int Adresse::getPorte()
{
	return porte;
}

string Adresse::getSecteur()
{
	return secteur;
}

string Adresse::getTel(){
	return tel;
}

int Adresse::getNum_rue(){
	return num_rue;
}

void Adresse::setPorte(int new_porte){
	porte=new_porte;
}

void Adresse::setSecteur(string new_secteur){
	secteur=new_secteur;
}

void Adresse::setTel(string new_tel){
	tel=new_tel;
}

void Adresse::setNum_rue(int new_num_rue){
	num_rue=new_num_rue;
}

Adresse::~Adresse()
{
	
}