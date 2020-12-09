/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : 25/11/2020
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Catalogue> (fichier Catalogue.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;

//------------------------------------------------------ Include personnel
#include "LinkedList.h"
#include "Catalogue.h"
#include "TrajetCompose.h"
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC		
//----------------------------------------------------- Méthodes publiques
void Catalogue::Ajouter(const Trajet * unTrajet)
{
	listeTrajets->Ajouter(unTrajet);
}
void Catalogue::Recherches(const char * vd, const char * va) const
{
		Data * c = listeTrajets->head;
  		while(c != NULL) {
    			if(!strcmp(c -> current->getterVilleDepart(), vd)){
				if(!strcmp(c -> current->getterVilleArrivee(), va)){
					c -> current -> Afficher();
				}
			}
    			c = c -> next;
  		}
}
void Catalogue::Recherchea(const char * vd, const char * va) const
{
	Recherches(vd, va);
	Data * c = listeTrajets->head;
	while(c != NULL){
		if(!strcmp(c -> current->getterVilleDepart(), vd)){
			LinkedList * pp = new LinkedList();

			//creer copie de c->current
			const Trajet * traj = c->current;
                        Trajet * unTraj = const_cast<Trajet*>(traj);
                        if(TrajetSimple * test = dynamic_cast<TrajetSimple*>(unTraj)){
                                TrajetSimple * trajA = new TrajetSimple(*test);
                                pp->Ajouter(trajA);
                        }else if(TrajetCompose* test = dynamic_cast<TrajetCompose*>(unTraj)){
                                TrajetCompose * trajA = new TrajetCompose(*test);
                                pp->Ajouter(trajA);
                        }
			rechercheRecurrente(pp, va);
			delete pp;
		}
		c = c->next;
	}
}
			
void Catalogue::Afficher() const{
	listeTrajets->Afficher();
}
//-------------------------------------------- Constructeurs - destructeur
Catalogue::Catalogue()
{	
	#ifdef MAP
		cout << "Appel au constructeur de <Catalogue>" << endl;
	#endif
	listeTrajets = new LinkedList;
} //----- Fin de Catalogue


Catalogue::~Catalogue()
{	
	#ifdef MAP
		cout << "Appel au destructeur de <Catalogue>" << endl;
	#endif
	delete listeTrajets;
} //----- Fin de ~Catalogue


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
void Catalogue::rechercheRecurrente(LinkedList * pp, const char * va) const
{
	Data * c = listeTrajets -> head;
	while(c != NULL){
		if(!strcmp(pp-> tail -> current->getterVilleArrivee(), c -> current->getterVilleDepart())){
			if(!pp->Contains(c -> current)){
				if(!strcmp(c -> current->getterVilleArrivee(), va)){

					//creer copie de c->current
					const Trajet * traj = c->current;
                        		Trajet * unTraj = const_cast<Trajet*>(traj);
                        		if(TrajetSimple * test = dynamic_cast<TrajetSimple*>(unTraj)){
                                		TrajetSimple * trajA = new TrajetSimple(*test);
                                		pp->Ajouter(trajA);
                        		}else if(TrajetCompose* test = dynamic_cast<TrajetCompose*>(unTraj)){
                                		TrajetCompose * trajA = new TrajetCompose(*test);
                                		pp->Ajouter(trajA);
                        		}
					pp->Afficher();
				}else{
					LinkedList *ppp = new LinkedList(*pp);

					//creer copie de c->current
					const Trajet * traj = c->current;
                        		Trajet * unTraj = const_cast<Trajet*>(traj);
                        		if(TrajetSimple * test = dynamic_cast<TrajetSimple*>(unTraj)){
                                		TrajetSimple * trajA = new TrajetSimple(*test);
                                		ppp->Ajouter(trajA);
                        		}else if(TrajetCompose* test = dynamic_cast<TrajetCompose*>(unTraj)){
                                		TrajetCompose * trajA = new TrajetCompose(*test);
                                		ppp->Ajouter(trajA);
                       			}
					rechercheRecurrente(ppp, va);
					delete ppp;
				}
			}
		}
		c = c->next;
	}
}
