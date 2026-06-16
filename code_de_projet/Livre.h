#ifndef LIVRE_H
#define LIVRE_H
#include<string>
using namespace std;


class Livre
{
	public:
		Livre();
		Livre(string issn , string auteur ,string titre );
		string getIssn();
		void setIssn(string new_issn);
		string getAuteur();
		void setAuteur(string new_auteur);
		string getTitre();
		void setTitre(string new_titre);
		~Livre();
	private:
		string issn , auteur,titre ;
};

#endif