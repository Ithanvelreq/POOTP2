//---------- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cp>

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
cout << "Affichage du trajet composé ;\n" ;
listeTrajet->Afficher();
}

LinkedList * TrajetCompose::getterListeTrajet () const {
        return listeTrajet;
}


//------------------------------------------------- Surcharge d'opérateurs
   bool TrajetCompose::operator == ( const Trajet * unTrajet) const
// Algorithme :
//
{
	const Trajet * traj= unTrajet;
	Trajet * unTraj = const_cast<Trajet*>(traj);
	if(TrajetCompose * trajCom = dynamic_cast<TrajetCompose*>(unTraj)){
		if(listeTrajet == trajCom->getterListeTrajet()){
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	}
} //----- Fin de operator ==

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

TrajetCompose::TrajetCompose (LinkedList * ll )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
#endif
listeTrajet = ll;
} //----- Fin de TrajetCompose

TrajetCompose::~TrajetCompose ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetCompose>" << endl;
#endif
} //----- Fin de ~TrajetCompose


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
