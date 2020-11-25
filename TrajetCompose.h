//---------- Interface de la classe <TrajetCompose> (fichier TrajetCompose.h) --->
#if ! defined ( TRAJETCOMPOSE_H )
#define TRAJETCOMPOSE_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetCompose>:
// Gère, sous forme de liste, des trajets composés d'autres trajets soit
// simples soit composés aussi. Cette liste est ordonnée, la ville d'arrivée
// d'un trajet est la ville de départ du suivant.
//
//------------------------------------------------------------------------

class TrajetCompose : virtual public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    void Afficher (void) const;
    // Mode d'emploi :
    // Affiche les caractéristiques des trajets composant le tajet composé
    // Contrat :
    //

    char * getterListeTrajets () const;
    // Mode d'emploi :
    // Méthode permettant d'accéder à l'attribut protégé listeTrajets
    // Contrat :
    //

//------------------------------------------------- Surcharge d'opérateurs
/*    TrajetCompose & operator = ( const TrajetCompose & unTrajetCompose );
    // Mode d'emploi :
    //
    // Contrat :
*/


//-------------------------------------------- Constructeurs - destructeur
/*    TrajetCompose ( const TrajetCompose & unTrajetCompose );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //
*/

    TrajetCompose (LinkedList & ll );
    // Mode d'emploi :
    // Construit un parcours composé des trajets présent dans la liste de
    // trajets passée en paramètres
    // Contrat :
    //


    virtual ~TrajetCompose ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
LinkedList listeTrajet;
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // TRAJETCOMPOSE_H
