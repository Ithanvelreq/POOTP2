//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------->
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

    void Afficher () const;
    // Mode d'emploi :
    // Affiche les attributs d'un trajet (villeDepart et villeArrivee)
    // Contrat :
    //

    char * getterVilleDepart () const;
    // Mode d'emploi :
    // Méthode permettant d'accéder à l'attribut protégé villeDepart
    // Contrat :
    //
<<<<<<< HEAD
    char * getterVilleArrivee () const;
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

    Trajet ();
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
char * villeDepart;
char * villeArrivee;
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // TRAJET_H


=======
}
#endif //Trajet.h
>>>>>>> e44c4b74710811ea1b227d0c577a11d0917496ca
