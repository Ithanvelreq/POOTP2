/*************************************************************************
                           Data  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <LinkedList> (fichier Data.h) ----------------
#if ! defined ( DATA_H )
#define DATA_H
//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <DATA>
//
//
//------------------------------------------------------------------------

class Data
{
//----------------------------------------------------------------- PUBLIC
public:
	const Trajet * current;
	Data * next;
//----------------------------------------------------- Méthodes publiques
		
// type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
	Data(const Trajet * unTrajet);
	// Mode d'emploi :
	// Construis un cellule de donnees utilisee pour notre LinkedList
	//
	//~Data();
	// Mode d'emploi :
	// Detruit une cellule de donnes pour notre LinkedList
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
//----------------------------------------------------- Attributs protégés	
};

//-------------------------------- Autres définitions dépendantes de <Data>

#endif // DATA_H

