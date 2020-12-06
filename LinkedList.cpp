/*************************************************************************
                           LinkedList  -  description
                             -------------------
    début                : 25/11/2020
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <LinkedList> (fichier LinkedList.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "LinkedList.h"
#include "Data.h"
#include "Trajet.h"
#include "TrajetSimple.h"
#include "TrajetCompose.h"
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC		
//----------------------------------------------------- Méthodes publiques
	void LinkedList::Ajouter(const Trajet * unTrajet)
	{
		Data * d = new Data(unTrajet);
		if(!head){
			head = d;
		}
		if(!tail){
			tail = d;
		}else{
			tail->next = d;
			tail = d;
		}
	}


	void LinkedList::Afficher() const
	{
		Data * c = head;
  		while(c != NULL) {
    			c -> current ->Afficher(); //here
			//cout << "ororo"<<endl;	
    			c = c -> next;
  		}
	}

	bool LinkedList::operator==(const LinkedList & ll)const
	{
		Data * c1 = head;
		Data * c2 = ll.head;
  		while(c1 != NULL && c2 != NULL) {
    			if(!(*(c1 -> current) == (c2 -> current) )){
				return false;
			}
    			c1 = c1 -> next;
			c2 = c2 -> next;
  		}
		if(c1 != NULL || c2 != NULL){
			return false;
		}
		return true;
	}
	
	bool LinkedList::Contains(const Trajet * unTrajet) const
	{
		Data * c = head;
  		while(c != NULL) {
    			if(*(c -> current) == unTrajet){
				return true;
			}
    			c = c -> next;
  		}
		return false;
	}
	
//-------------------------------------------- Constructeurs - destructeur
	LinkedList::LinkedList()
	{
		head = NULL;
		tail = NULL;
		#ifdef MAP
			cout << "Appel au constructeur de <LinkedList>" << endl;
		#endif
	} //----- Fin de LinkedList

	LinkedList::LinkedList(const LinkedList & ll)
	{
		head = NULL;
		tail = NULL;

		Data *c = ll.head;
		while(c != NULL){
			const Trajet * temp = c->current;
			Trajet * unTrajet = const_cast<Trajet*>(temp);
			if(TrajetSimple * test = dynamic_cast<TrajetSimple*>(unTrajet)){
				TrajetSimple * trajA = new TrajetSimple(*test);
				Ajouter(trajA);
			}else if(TrajetCompose* test = dynamic_cast<TrajetCompose*>(unTrajet)){
				TrajetCompose * trajA = new TrajetCompose(*test);
				Ajouter(trajA);
			}
			c = c -> next;
		}
		Afficher();	
	}

	LinkedList::~LinkedList()
	{
		Data * c1 = head;
		Data * c2 = c1;
 	 	while(c1 != NULL) {
	    		c2 = c1 -> next; 
			delete c1;
			c1 = c2;
	  	}
		#ifdef MAP
			cout << "Appel au destructeur de <LinkedList>" << endl;
		#endif
	} //----- Fin de ~LinkedList


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
