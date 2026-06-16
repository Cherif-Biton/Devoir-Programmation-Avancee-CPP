
#include <iostream>
#include "livre.h"
using namespace std;
Livre::Livre()
{
	issn="";
	auteur="";
	titre="";
}

Livre::Livre(string issn_ , string auteur_ ,string titre_  )
{
	issn=issn_;
	auteur=auteur_;
	titre=titre_;
}

string Livre::getIssn(){
	return issn;
}

void Livre::setIssn(string new_issn){
	issn=new_issn;
}

string Livre::getAuteur(){
	return auteur;
}

void Livre::setAuteur(string new_auteur){
	auteur=new_auteur;
}

string Livre::getTitre(){
	return titre;
}

void Livre::setTitre(string new_titre){
	titre=new_titre;
}

Livre::~Livre()
{
	
}