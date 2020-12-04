//---------- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) ------->

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;
//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"
#include "LinkedList.h"
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void TrajetCompose::Afficher () const{
Data * c1= listeTrajet.head;
int i=1;
while (c1 != NULL){
        cout << " -  Trajet n°" << i << "\r\n";
        (c1->current)->Afficher();
        c1=c1->next;
        i++;
}
}

LinkedList TrajetCompose::getterListeTrajet () const {
        return listeTrajet;
}


//------------------------------------------------- Surcharge d'opérateurs
/* TrajetCompose & TrajetCompose::operator = ( const TrajetCompose & unTrajetCompose )
// Algorithme :
//
{
} //----- Fin de operator =
*/

//-------------------------------------------- Constructeurs - destructeur
/*  TrajetCompose::TrajetCompose ( const TrajetCompose & unTrajetCompose )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetCompose>" << endl;
#endif
} //----- Fin de TrajetCompose (constructeur de copie)
*/

TrajetCompose::TrajetCompose (LinkedList & ll )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
#endif
Data * c1 = ll.head;
Data * c2 = listeTrajet.head;
Data * c3;
while (c1 != NULL){
        c3=c2;
        c2=c2->next;
        c3=c1;
        c1=c1->next;
}
} //----- Fin de TrajetCompose
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


