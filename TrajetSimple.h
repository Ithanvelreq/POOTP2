//---------- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) --->
#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetSimple>:
// Gère des trajets directs avec un moyen de transport défini, d'une ville
// à une autre sans s'arrêter à une autre ville.
//
//------------------------------------------------------------------------

class TrajetSimple : virtual public Trajet
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

    char * getterMoyenTransport () const;
    // Mode d'emploi :
    // Méthode permettant d'accéder à l'attribut protégé moyenTransport
    // Contrat :
    //

//------------------------------------------------- Surcharge d'opérateurs
/*    TrajetSimple & operator = ( const TrajetSimple & unTrajetSimple );
    // Mode d'emploi :
    //
    // Contrat :
*/


//-------------------------------------------- Constructeurs - destructeur
/*    TrajetSimple ( const TrajetSimple & unTrajetSimple );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //
*/

    TrajetSimple (const char * vd, const char* va, sondt char* mt );
    // Mode d'emploi :
    // Construit un trajet simple avec une ville de départ, une ville
    // d'arrivée et un moyen de transport
    // Contrat :
    //


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

#endif // TRAJETSIMPLE_H


