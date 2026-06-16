#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
using namespace std;

template <class T>
class Client {
private:
    T id;
    string nom;
    string prenom;

public:
    Client() : id(T()), nom(""), prenom("") {}
    Client(T id, string nom, string prenom) : id(id), nom(nom), prenom(prenom) {}

    T getId() const { return id; }
    void setId(T new_id) { id = new_id; }

    string getNom() const { return nom; }
    void setNom(string new_nom) { nom = new_nom; }

    string getPrenom() const { return prenom; }
    void setPrenom(string new_prenom) { prenom = new_prenom; }

    ~Client() {
        
    }
};

#endif
