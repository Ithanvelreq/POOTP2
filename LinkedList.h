/*************************************************************************
                           LinkedList  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <LinkedList> (fichier LinkedList.h) ----------------
#if ! defined ( LINKEDLIST_H )
#define LINKEDLIST_H
//--------------------------------------------------- Interfaces utilisées

#include "Data.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <LINKEDLIST>
//
//
//------------------------------------------------------------------------

class LinkedList
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	Data * head;
	Data * tail;
// type Méthode ( liste des paramètres );

	void Ajouter (const int * unTrajet);
	void Afficher() const;
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	LinkedList();
	// Mode d'emploi :
	//Constructeur de la classe LinkedList

	~LinkedList();
	// Mode d'emploi :
	//Constructeur de la classe LinkedList

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
//----------------------------------------------------- Attributs protégés	
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // LINKEDLIST_H

