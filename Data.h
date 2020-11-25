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
	const int * current;
	Data * next;
//----------------------------------------------------- Méthodes publiques
		
// type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
	Data(const int * unTrajet);
	// Mode d'emploi :
	// Construis un cellule de donnees utilisee pour notre LinkedList
	//
	//Destructeur de la Classe par defaut
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
//----------------------------------------------------- Attributs protégés	
};

//-------------------------------- Autres définitions dépendantes de <Data>

#endif // DATA_H

