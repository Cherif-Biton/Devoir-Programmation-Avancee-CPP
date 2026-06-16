#ifndef ADRESSE_H
#define ADRESSE_H
#include<string>
using namespace std;

class Adresse
{
	public:
		Adresse();
		Adresse(int porte_a,string secteur_a ,string tel_a ,int num_rue_a);
		int getPorte();
		string getSecteur();
		string getTel();
		int getNum_rue();
		void setPorte(int new_porte);
		void setSecteur(string new_secteur);
		void setTel(string new_tel);
		void setNum_rue(int new_num_rue);
		~Adresse();
	private:
		int porte,num_rue;
		string secteur,tel;
		
};
#endif