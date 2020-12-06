/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : 25/11/2020
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Catalogue> (fichier Catalogue.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;

//------------------------------------------------------ Include personnel
#include "LinkedList.h"
#include "Catalogue.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC		
//----------------------------------------------------- Méthodes publiques
void Catalogue::Ajouter(const Trajet * unTrajet)
{
	listeTrajets->Ajouter(unTrajet);
}
void Catalogue::Recherches(const char * vd, const char * va) const
{
		Data * c = listeTrajets->head;
  		while(c != NULL) {
    			if(!strcmp(*(c -> current).gettervilleDepart(), vd){
				if(!strcmp(*(c -> current).gettervilleArrivee(), va){
					*(c -> current).Afficher();
				}
			}
    			c = c -> next;
  		}
}
void Catalogue::Recherchea(const char * vd, const char * va) const
{
	Data * c = listeTrajets->head;
	while(c != NULL){
		if(!strcmp(*(c -> current).gettervilleDepart(), vd)){
			LinkedList pp = new LinkedList;
			pp.Ajouter(*(c -> current));
			rechercheRecurrente(pp, va);
			delete pp;
		}
		c = c->next;
	}
}
			
void Catalogue::Afficher() const{
	ListreTrajets.Afficher();
}
//-------------------------------------------- Constructeurs - destructeur
Catalogue::Catalogue()
{
	LinkedList * listeTrajets = new * LinkedList;
	#ifdef MAP
		cout << "Appel au constructeur de <Catalogue>" << endl;
	#endif
} //----- Fin de Catalogue


Catalogue::~Catalogue()
{
	delete *ListeTrajets;
	#ifdef MAP
		cout << "Appel au destructeur de <Catalogue>" << endl;
	#endif
} //----- Fin de ~Catalogue


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
void Catalogue::rechercheRecurrente(LinkedList & pp, const char * va) const
{
	Data * c = listeTrajets -> head;
	while(c != NULL){
		if(!strcmp(*(pp.tail -> current).gettervilleArrive(), *(c -> current).gettervilleDepart())){
			if(!pp.Contains(*(c -> current))){
				if((!strcmp(*(c -> current).gettervilleArivee(), vd)){
					pp.Ajouter(i);
					pp.afficher();
				}else{
					ppp = new LinkedList(pp);
					ppp.Ajouter(i);
					rechercheRecurrente(ppp);
					delete ppp;
				}
			}
		}
	}
}
