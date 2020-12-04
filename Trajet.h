/---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------->
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Trajet>:
// Classe abstraite dont les classes TrajetSimple et TrajetCompose heritent
//
//------------------------------------------------------------------------

class Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    virtual void Afficher () const= 0;
    // Mode d'emploi :
    // Affiche les attributs d'un trajet (villeDepart et villeArrivee)
    // Contrat :
    //

    virtual const char * getterVilleDepart () const;
    // Mode d'emploi :
    // Méthode permettant d'accéder à l'attribut protégé villeDepart
    // Contrat :
    //

   virtual const char * getterVilleArrivee () const;
    // Mode d'emploi :
    // Méthode permettant d'accéder à l'attribut protégé villeArrivee
    // Contrat :
    //

//------------------------------------------------- Surcharge d'opérateurs
/*    Trajet & operator = ( const Trajet & unTrajet );
    // Mode d'emploi :
    //
    // Contrat :
*/

protected:
//----------------------------------------------------- Méthodes protégées


//-------------------------------------------- Constructeurs - destructeur
/*    Trajet ( const Trajet & unTrajet );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //
*/

    /* Trajet ();*/
    // Mode d'emploi :
    // Constructeur par défault
    // Contrat :
    //


    virtual ~Trajet ( );
    // Mode d'emploi :
//
    // Contrat :
    //

//----------------------------------------------------- Attributs protégés
const char * villeDepart;
const char * villeArrivee;
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // TRAJET_H


