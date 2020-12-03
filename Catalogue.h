/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Catalogue> (fichier Catalogue.h) ----------------
#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CATALOGUE>
//
//
//------------------------------------------------------------------------

class Catalogue
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
		
// type Méthode ( liste des paramètres );
	void Ajouter(const Trajet * unTrajet);
	void Recherches(const char * vd, const char * va) const;
	void Recherchea(const char * vd, const char * va) const;
	void Afficher() const;
	// Mode d'emploi :
	//
	// Contrat :
	//
//-------------------------------------------- Constructeurs - destructeur
	Catalogue();
	// Mode d'emploi :
	//Constructeur de la classe Catalogue
	// Contrat :
	//

	~Catalogue();
	// Mode d'emploi :
	//Destructeur de la classe Catalogue

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
	rechercheRecurrente(LinkedList & pp, const char * va) const;
//----------------------------------------------------- Attributs protégés
	LinkedList listeTrajets;
};

//-------------------------------- Autres définitions dépendantes de <Catalogue>

#endif // CATALOGUE_H

