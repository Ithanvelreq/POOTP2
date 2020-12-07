//---------- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) --->
#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H
#include "Trajet.h"
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetSimple>:
// Gère des trajets directs avec un moyen de transport défini, d'une ville
// à une autre sans s'arrêter à une autre ville.
//
//------------------------------------------------------------------------

class TrajetSimple : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    void Afficher (void) const;
    // Mode d'emploi :
    // Affiche les caractéristiques d'un trajetSimple (villeDepart, 
    // villeArrivee et moyenTransport)
    // Contrat :
    //

    const char * getterMoyenTransport () const;
    // Mode d'emploi :
    // Méthode permettant d'accéder à l'attribut protégé moyenTransport
    // Contrat :
    //
//------------------------------------------------- Surcharge d'opérateurs
    bool operator==(const Trajet * unTrajet) const;
    // Mode d'emploi :
    //
    // Contrat :



//-------------------------------------------- Constructeurs - destructeur
/*    TrajetSimple ( const TrajetSimple & unTrajetSimple );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //
*/

    TrajetSimple (const char * vd,const char* va,const char* mt );
    // Mode d'emploi :
    // Construit un trajet simple avec une ville de départ, une ville
    // d'arrivée et un moyen de transport
    // Contrat :
    //
    //TrajetSimple(const TrajetSimple & unTrajet);


    virtual ~TrajetSimple ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
char * moyenTransport;
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // TRAJETSSIMPLE_H

