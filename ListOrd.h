//---------- Interface de la classe <ListOrd> (fichier ListOrd.h) ------------->
#if ! defined ( LISTORD_H )
#define LISTORD_H
//--------------------------------------------------- Interfaces utilisées
#include "LinkedList.h"
#include "Trajet.h"

class ListOrd : public LinkedList
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

// type Méthode ( liste des paramètres );

        void Ajouter (const Trajet * unTrajet);
        /*void Afficher() const;
        bool operator == (const LinkedList & ll) const;
        bool Contains(const Trajet * unTrajet)const;*/


//-------------------------------------------- Constructeurs - destructeur
        ListOrd();
        // Mode d'emploi :
        //Constructeur de la classe LinkedList

        ListOrd(const ListOrd & ll);
        //Mode d'emploi
        //Constructeur de copie de la classe LinkedList

        ~ListOrd();
        // Mode d'emploi :
        //Constructeur de la classe LinkedList

//------------------------------------------------------------------ PRIVE
        friend class Catalogue;
        friend class TrajetCompose;
protected:
//----------------------------------------------------- Méthodes protégées
//----------------------------------------------------- Attributs protégés
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // LISTORD_H

