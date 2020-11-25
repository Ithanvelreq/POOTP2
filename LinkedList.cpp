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
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC		
//----------------------------------------------------- Méthodes publiques
	void LinkedList::Ajouter(const int * unTrajet)
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
    			cout << *(c -> current) << "  " << endl;
    			c = c -> next;
  		}
  		printf("\n");
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
