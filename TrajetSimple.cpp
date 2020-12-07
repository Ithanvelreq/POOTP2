//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp)>

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;
#include "string.h"
#include <cstring>
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
bool TrajetSimple::operator == ( const Trajet * unTrajet)const
{
	const Trajet * traj= unTrajet;
	Trajet * unTraj = const_cast<Trajet*>(traj);
	if(TrajetSimple * trajSim = dynamic_cast<TrajetSimple*>(unTraj)){
		int a = strcmp(villeDepart, trajSim->getterVilleDepart());
		int b = strcmp(villeArrivee, trajSim->getterVilleArrivee());
		int c = strcmp(moyenTransport, trajSim->getterMoyenTransport());
		if(a == 0 && b == 0 && c == 0){
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	}	
}

//----- Fin de operator =
//-------------------------------------------- Constructeurs - destructeur

TrajetSimple::TrajetSimple ( const TrajetSimple & unTrajetSimple )
// Algorithme :
//
{
villeDepart = new char[20];
villeArrivee = new char[20];
moyenTransport = new char[20];
strcpy(villeDepart, unTrajetSimple.getterVilleDepart());
strcpy(villeArrivee, unTrajetSimple.getterVilleArrivee());
strcpy(moyenTransport, unTrajetSimple.getterMoyenTransport());
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple (constructeur de copie)/

TrajetSimple::TrajetSimple (const char * vd,const char* va,const char* mt )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
villeDepart = new char[20];
villeArrivee = new char[20];
moyenTransport = new char[20];
strcpy(villeDepart, vd);
strcpy(villeArrivee, va);
strcpy(moyenTransport, mt);
} //----- Fin de TrajetSimple

TrajetSimple::~TrajetSimple ( )
// Algorithme :
//
{
	delete [] villeDepart;
	delete [] villeArrivee;
	delete [] moyenTransport;
#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de ~TrajetSimple



//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
