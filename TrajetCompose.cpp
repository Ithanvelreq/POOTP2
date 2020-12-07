//---------- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cp>

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
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
TrajetCompose::TrajetCompose ( const TrajetCompose & unTrajetCompose )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetCompose>" << endl;
#endif
LinkedList* llcopie = new LinkedList(*unTrajetCompose.getterListeTrajet());
listeTrajet=llcopie;
villeDepart = new char[20];
villeArrivee = new char[20];
strcpy(villeDepart, unTrajetCompose.getterVilleDepart());
strcpy(villeArrivee, unTrajetCompose.getterVilleArrivee());
} //----- Fin de TrajetCompose (constructeur de copie)

TrajetCompose::TrajetCompose (LinkedList * ll )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
#endif
listeTrajet = ll;
villeDepart = new char[20];
villeArrivee = new char[20];
strcpy(villeDepart, ll->head->current->getterVilleDepart());
strcpy(villeArrivee, ll->tail->current->getterVilleArrivee());
} //----- Fin de TrajetCompose

TrajetCompose::~TrajetCompose ( )
// Algorithme :
//
{
delete listeTrajet;
delete [] villeDepart;
delete [] villeArrivee;
#ifdef MAP
    cout << "Appel au destructeur de <TrajetCompose>" << endl;
#endif
} //----- Fin de ~TrajetCompose


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
