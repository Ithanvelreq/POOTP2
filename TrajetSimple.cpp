//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp)>

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void TrajetSimple::Afficher () const{
        cout << "Ville de départ :" << villeDepart << "\r\n";
        cout << "Ville d'arrivée :" << villeArrivee << "\r\n";
        cout << "Moyen de transport :" << moyenTransport << "\r\n";
}

const char * TrajetSimple::getterMoyenTransport () const {
        return moyenTransport;
}

//------------------------------------------------- Surcharge d'opérateurs
/* TrajetSimple & TrajetSimple::operator = ( const TrajetSimple & unTrajetSimpl>
// Algorithme :
//
{
} //----- Fin de operator =
*/
//-------------------------------------------- Constructeurs - destructeur
/*  TrajetSimple::TrajetSimple ( const TrajetSimple & unTrajetSimple )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple (constructeur de copie)
*/

TrajetSimple::TrajetSimple (const char * vd,const char* va,const char* mt )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
villeDepart = vd;
villeArrivee = va;
moyenTransport = mt;
} //----- Fin de TrajetSimple

TrajetSimple::~TrajetSimple ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de ~TrajetSimple



//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
