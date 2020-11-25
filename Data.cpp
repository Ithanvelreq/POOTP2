/*************************************************************************
                           Data  -  description
                             -------------------
    début                : 25/11/2020
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Data> (fichier Data.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Data.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC		
//----------------------------------------------------- Méthodes publiques

//-------------------------------------------- Constructeurs - destructeur
Data::Data(const Trajet * unTrajet)
{
	current = unTrajet;
	next = NULL;
	#ifdef MAP
		cout << "Appel au constructeur de <Data>" << endl;
	#endif
} //----- Fin de Data
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées