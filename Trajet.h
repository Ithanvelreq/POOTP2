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

    void Afficher (void);
    // Mode d'emploi :
    // Affiche les attributs d'un trajet (villeDepart et villeArrivee)
    // Contrat :
    //

    char * getterVilleDepart () const;
    // Mode d'emploi :
    // Méthode permettant d'accéder à l'attribut protégé villeDepart
    // Contrat :
    //
}
#endif //Trajet.h