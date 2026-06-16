#include <iostream>
#include "livre.h"
#include "Adresse.h"
#include "Personne.h"
#include "Eleve.h"
#include "Client.h"
#include<vector>
#include <limits>   

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Déclarations globales 
vector<Eleve> listeEleves;

void Menu_resultat();
void TestLivre();
void TestAdresse();
void TestPersonne();
void TestEleve();
void TestClient();
void remplirListeEleves();
void afficherListeEleves() ;

//Le main
int main(int argc, char** argv) {
	
	Menu_resultat();
	
	return 0;
}

//Définitions des fonctions
void Menu_resultat(){
	
	int choix;
	do{
		cout<<" "<<endl;
	cout<<"\n=======Ceci est un menu qui presente les resultats issus des programmes  ========"<<endl;
	cout<<" "<<endl;
	cout<<"Cliquez sur 1 pour voir les resultats du programme Livre."<<endl;
	cout<<"Cliquez sur 2 pour voir les resultats du programme Adresse."<<endl;
	cout<<"Cliquez sur 3 pour voir les resultats du programme Personne."<<endl;
	cout<<"Cliquez sur 4 pour voir les resultats du programme Eleve."<<endl;
	cout<<"Cliquez sur 5 pour voir les resultats du programme Clients."<<endl;
	cout<<"Cliquez sur 6 pour constituer une liste d'eleve."<<endl;
	cout<<"Cliquez sur 7 pour afficher la liste."<<endl;
	cout<<"Cliquez sur 0 pour quitter."<<endl;
	cout<<" "<<endl;
	cout << "Votre choix : ";
    cin >> choix;
    
	cout<<" "<<endl;
	
	switch(choix){
		case 0:cout<<"------------AUREVOIR!------------------"<<endl;break;
		case 1:TestLivre();break;
		case 2:TestAdresse();break;
		case 3: TestPersonne();break;
		case 4: TestEleve();break;
		case 5:TestClient();break;
		case 6: remplirListeEleves();break;
		case 7:  afficherListeEleves();break;
		default:cout<<"Erreur de saisi veuillez recommencer"<<endl;break;
	}
		
	}while(choix!=0);
}

// ============================================================
//   EXERCICE 1- DDU
// ============================================================

// ============================================================
//    - Class Livre
// ============================================================

void TestLivre(){
cout<<"***************"<<endl;
cout<<"	Class Livre   "<<endl;
cout<<"****************"<<endl;
	
	//utilisation du constructeur par defaut de la classe Livre
	
	cout<<"Methode 1 :"<<"\tUtilisation du constructeur par défaut"<<"(Appel des setters)"<<endl;
	
	Livre l1;
	// setters
	l1.setIssn("1234-5678");
	l1.setAuteur("Amadou Hampaté BA");
	l1.setTitre("Petit Bodiel");
	
	// getters
	cout<<"Les references du livre " <<l1.getTitre()<<" sont : "<<endl;
	cout<<"\n"<<endl;
	cout<<"Code: "<<l1.getIssn()<<endl;
	cout<<"Auteur: "<<l1.getAuteur()<<endl;
	cout<<"Titre: "<<l1.getTitre()<<endl;
	
	cout<<"***************************************************************************************************************************"<<endl;	
	
	//utilisation du constructeur par parametre de la classe Livre
	cout<<"Methode 2 "<<"\tUtilisation du constructeur par paramètres"<<endl;
	
	Livre l2("BA4-56CO ","Plus Malin que le Diable","Napoleon Hill");
	
	// getters
	cout<<"Les references du livre " <<l2.getTitre()<<" sont :"<<endl;
	cout<<"\n"<<endl;
	cout<<"Code: "<<l2.getIssn()<<endl;
	cout<<"Auteur: "<<l2.getAuteur()<<endl;
	cout<<"Titre: "<<l2.getTitre()<<endl;
}

// ============================================================
//   EXERCICE 2 - (HERITAGE)
// ============================================================


// ============================================================
//    - Class Adresse
// ============================================================

void TestAdresse(){
	cout<<"***************"<<endl;
	cout<<"	Class Adresse   "<<endl;
	cout<<"****************"<<endl;
	
	//utilisation du constructeur par defaut de la classe Adresse
	
	cout<<"Methode 1 "<<"\tUtilisation du constructeur par défaut"<<"(Appel des setters)"<<endl;
	Adresse a;
	// setters
	a.setPorte(12);
	a.setSecteur("D4");
	a.setTel("67-12-23-84");
	a.setNum_rue(24);
		
		// getters
	cout<<"L'Adresse est : "<<endl;
	cout<<"\n"<<endl;
	cout<<"Porte numero: "<<a.getPorte()<<endl;
	cout<<"Secteur : "<<a.getSecteur()<<endl;
	cout<<"Numero de telephone: "<<a.getTel()<<endl;
	cout<<"Numéro de Rue: "<<a.getNum_rue()<<endl;
	
	cout<<"***************************************************************************************************************************"<<endl;	
	
	//utilisation du constructeur par parametre de la classe Adresse
	
	cout<<"Methode 2  "<<"\tUtilisation du constructeur par paramètres"<<endl;
	Adresse ulrich(1,"Ouezinville","06-27-89-76",15);
	
	// getters
	cout<<"L'Adresse est : "<<endl;
	cout<<"\n"<<endl;
	cout<<"Porte numero: "<<ulrich.getPorte()<<endl;
	cout<<"Secteur : "<<ulrich.getSecteur()<<endl;
	cout<<"Numero de telephone: "<<ulrich.getTel()<<endl;
	cout<<"Numéro de Rue: "<<ulrich.getNum_rue()<<endl;
}

// ============================================================
//    - Class Personne
// ============================================================

void TestPersonne(){
	cout<<"***************"<<endl;
	cout<<"	Class Personne   "<<endl;
	cout<<"****************"<<endl;
	
	//utilisation du constructeur par defaut de la classe Personne
	cout<<"Methode 1 "<<"\tUtilisation du constructeur par défaut"<<"(Appel des setters)"<<endl;
	Personne b;
	
	// setters
	b.setMatricule(23);
	b.setNom("Edith SANOGO");
	b.setAdresse(Adresse(2,"Belle ville", "+226 06 25 34 23", 23));
	
	// getters
	cout<<"Les references sont: "<<endl;
	cout<<"\n"<<endl;
	cout<<"Matricule: "<<b.getMatricule()<<endl;
	cout<<"Nom: "<<b.getNom()<<endl;
	cout<<"Porte Numéro: "<<b.getAdresse().getPorte()<<endl;
	cout <<"Secteur: "<<b.getAdresse().getSecteur()<<endl;
	cout<< "Tél: "<< b.getAdresse().getTel()<<endl;
	cout<< "Numéro de Rue: "<< b.getAdresse().getNum_rue()<<endl;
	
	cout<<"***************************************************************************************************************************"<<endl;	
	
	//utilisation du constructeur par parametre de la classe Personne
	cout<<"Methode 2 "<<"\tUtilisation du constructeur par paramètres"<<endl;
	Personne p1(1,"ulrich", Adresse(1,"Ouezinville","06-27-89-76",15));
	
	// getters
	cout<<endl<<"Les references sont: "<<endl;
	cout<<"\n"<<endl;
	cout<<"Matricule: "<<p1.getMatricule()<<endl;
	cout<<"Nom: "<<p1.getNom()<<endl;
	cout<<"Porte Numéro: "<<p1.getAdresse().getPorte()<<endl;
	cout<<"Secteur: "<<p1.getAdresse().getSecteur()<<endl;
	cout<<"Tél: "<< p1.getAdresse().getTel()<<endl;
	cout<<"Numéro de Rue: "<< p1.getAdresse().getNum_rue()<<endl;

}

// ============================================================
//    - Class Eleve
// ============================================================
void TestEleve(){
	cout<<"***************"<<endl;
	cout<<"	Class Eleve   "<<endl;
	cout<<"****************"<<endl;
	
	//utilisation du constructeur par defaut de la classe Eleve
	cout<<"Methode 1 "<<"\tUtilisation du constructeur par défaut"<<"(Appel des setters)"<<endl;
	Eleve e2;
	// setters
	e2.setMatricule(23);
	e2.setNom("Edith SANOGO");
	e2.setLibelle("MPCI");
	e2.setAdresse(Adresse(2,"Belle ville", "+226 06 25 34 23", 23));
	
	// getters
	cout<<"Les references sont : " <<endl;
	cout<<"\n"<<endl;
	cout<<"Matricule: "<<e2.getMatricule()<<endl;
	cout<<"Nom: "<<e2.getNom()<<endl;
	cout<<"Filière: "<<e2.getLibelle()<<endl;
	cout<<"Porte Numéro: "<<e2.getAdresse().getPorte()<<endl;
	cout <<"Secteur: "<<e2.getAdresse().getSecteur()<<endl;
	cout<<"Tél: "<< e2.getAdresse().getTel()<<endl;
	cout<<"Numéro de Rue: "<< e2.getAdresse().getNum_rue()<<endl;
	
	cout<<"***************************************************************************************************************************"<<endl;	
	
	//utilisation du constructeur par parametre de la classe Eleve
	cout<<"Methode 2 "<<"\tUtilisation du constructeur par paramètres"<<endl;
	Eleve e1(1,"ulrich","LSI", Adresse(1,"Ouezinville","06-27-89-76",15));
	
	cout<<"Les references sont : " <<endl;
	cout<<"\n"<<endl;
	cout<<"Matricule: "<<e1.getMatricule()<<endl;
	cout<<"Nom: "<<e1.getNom()<<"\nFilière: "<<e1.getLibelle()<<endl;
	cout<<"Porte Numéro: "<<e1.getAdresse().getPorte()<<endl;
	cout<<"Secteur: "<<e1.getAdresse().getSecteur()<<endl;
	cout<< "Tél: "<< e1.getAdresse().getTel()<<endl;
	cout<< "Numéro de Rue: "<< e1.getAdresse().getNum_rue()<<endl;


}

// ============================================================
//   EXERCICE 3 - (TEMPLATE)
// ============================================================

// ============================================================
//    - Class Client
// ============================================================
void TestClient(){
	cout<<"***************"<<endl;
	cout<<"	Class Client  "<<endl;
	cout<<"****************"<<endl;
	//utilisation du constructeur par defaut de la classe Client
	cout<<"Methode 1 "<<"\tUtilisation du constructeur par défaut"<<"(Appel des setters)"<<endl;
	Client<int> c;
	// setters
	c.setId(1);
	c.setNom("Zabda");
	c.setPrenom("Vanessa");
	// getters
	cout<<"Les references sont : " <<endl;
	cout<<"\n"<<endl;
	cout<<"ID: "<<c.getId()<<endl;
	cout<<"Nom: "<<c.getNom()<<endl;
	cout<<"Prenom: "<<c.getPrenom()<<endl;
	
	cout<<"***************************************************************************************************************************"<<endl;	
	
	//utilisation du constructeur par parametre de la classe Client
	cout<<"Methode 2 "<<"\tUtilisation du constructeur par paramètres"<<endl;
	Client <int> c1(2,"BA","Ali");
	
	// getters
	cout<<"Les references sont : " <<endl;
	cout<<"\n"<<endl;
	cout<<"ID: "<<c1.getId()<<endl;
	cout<<"Nom: "<<c1.getNom()<<endl;
	cout<<"Prenom: "<<c1.getPrenom()<<endl;
}

// ============================================================
//   EXERCICE 4 - STL 
// ============================================================

// ============================================================
//   LISTE D'ELEVES
// ============================================================

void remplirListeEleves() {
    int n;
    cout << "Entrez le nombre d'élèves que vous voulez saisir: ";
    while(!(cin >>n)) {
    cin.clear();                                
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cout << "Saisie invalide. Entrez un entier : ";
}

    
    int matricule, porte, rue;
    string nom, libelle,secteur, telephone;

    for (int i = 0; i < n; i++) {
        cout << "\nEleve " << i+1 << " :" << endl;
        cout<<"\n"<<endl;
        cout << "Matricule : "<<endl;
		while(!(cin >> matricule)) {
    cin.clear();                                
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cout << "Saisie invalide. Entrez un entier : ";
	}      
		cin.ignore();   
        cout << "Nom : "<<endl;
        getline(cin, nom);
        cout << "Libelle : "<<endl;
        getline(cin, libelle);
        cout<<"Porte: "<<endl; 
			while(!(cin >> porte)) {
    cin.clear();                                
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cout << "Saisie invalide. Entrez un entier : ";
	}  
		cin.ignore();
        cout<<"Secteur: "<<endl; 
		getline(cin, secteur);
        cout<<" Telephone: "<<endl; 
		getline(cin, telephone);
        cout<<"Rue: "<<endl; 
		
			while(!(cin >> rue)) {
    cin.clear();                                
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cout << "Saisie invalide. Entrez un entier : ";
	}  
		
        Eleve e(matricule, nom, libelle, Adresse(porte, secteur, telephone, rue));
        listeEleves.push_back(e);
        
        
    }
    cout << "\nSaisie terminee !" << endl;
}

void afficherListeEleves() {
    if (listeEleves.empty()) {
        cout << "La liste est vide. Veuillez d'abord saisir des eleves." << endl;
        return;
    }

    cout << "--- Liste des eleves ---" << endl;
    for (size_t i = 0; i < listeEleves.size(); i++) {
        	 cout<<"Eleve " << i+1 << " : "<<endl;
    		 cout<<"Matricule " << listeEleves[i].getMatricule()<<endl;
             cout<<"Nom " << listeEleves[i].getNom()<<endl;
             cout<<"Libellé " << listeEleves[i].getLibelle()<<endl;
        	 cout<<"Porte: " << listeEleves[i].getAdresse().getPorte()<<endl;
        	 cout<<"Secteur: "<< listeEleves[i].getAdresse().getSecteur()<<endl;
        	 cout<<"Telephone: "<< listeEleves[i].getAdresse().getTel()<<endl;
         	 cout<<"Rue: "<< listeEleves[i].getAdresse().getNum_rue()<<endl;
         	 cout<<"----------------------------------------------------------------"<<endl;
         	 cout<<"\n"<<endl;
	   
    }
}
