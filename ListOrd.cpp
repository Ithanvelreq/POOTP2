/---------- Réalisation de la classe <LinkedList> (fichier LinkedList.cpp) --->

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <cstring>
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "ListOrd.h"
#include "Data.h"
#include "Trajet.h"
#include "TrajetSimple.h"
#include "TrajetCompose.h"

void ListOrd::Ajouter(const Trajet * unTrajet)
{
        Data * d = new Data(unTrajet);
        if(!head){
                head = d;
        }
        if(!tail){
                tail = d;
    }else{
                if(!strcmp(tail->current->getterVilleArrivee(),unTraje->getterVilleDepart())){
                        tail->next = d;
                        tail = d;
                }else{
                        cout<<"La ville de départ du trajet que vous voulez ajouter ne correspond pas à la ville d'arrivée du dernier trajet actuel de la liste"<<endl;
                }
    }
}

ListOrd::ListOrd()
        {
                head = NULL;
                tail = NULL;
                #ifdef MAP
                        cout << "Appel au constructeur de <ListOrd>" << endl;
                #endif
        } //----- Fin de ListOrd

        ListOrd::ListOrd(const ListOrd & ll)
        {
                #ifdef MAP
                        cout << "Appel au constructeur de copie <ListOrd>" << endl;
                #endif
                head = NULL;
                tail = NULL;

                Data *c = ll.head;
                while(c != NULL){
                        const Trajet * traj = c->current;
                        Trajet * unTraj = const_cast<Trajet*>(traj);
                        if(TrajetSimple * test = dynamic_cast<TrajetSimple*>(unTraj)){
                                TrajetSimple * trajA = new TrajetSimple(*test);
                                Ajouter(trajA);
                                //trajA->Afficher();
                        }else if(TrajetCompose* test = dynamic_cast<TrajetCompose*>(unTraj)){
                                TrajetCompose * trajA = new TrajetCompose(*test);
                                Ajouter(trajA);
                                //trajA->Afficher();
                        }
                        c = c -> next;
                }
        }

        ListOrd::~ListOrd()
        {
                Data * c1 = head;
                Data * c2 = c1;
                while(c1 != NULL) {
                        c2 = c1 -> next; 
                        delete c1;
                        c1 = c2;
                }
                #ifdef MAP
                        cout << "Appel au destructeur de <ListOrd>" << endl;
                #endif
        } //----- Fin de ~ListOrd



