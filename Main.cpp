#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char * command = new char[20];
	char * va = new char[20];
	char * vd = new char[20];
	char * mt = new char[20];
	Catalogue catalog = new Catalogue;
	cin.getline(command, 20);
	while(strcmp(command, "bye") != 0){
		if(!strcmp(command, "ajouts")){
			cin.getline(vd, 20, ' ');
			cin.getline(va, 20, ' ');
			cin.getline(mt, 20);
			TrajetSimple traj = new TrajetSimple(vd, va, mt)
			catalog.Ajouter(&traj);
			cout <<"Trajet simple" << "  vd: " << vd << "  va: " << va << "  mt: " << mt <<"  Ajoute" << endl;
		}else if(!strcmp(command, "ajoutc")){
			LinkedList ll = new LinkedList();
			cout << "Trajet composee"<< endl;	
			while(strcmp(command, "fini") != 0){
				cin.getline(va, 20, ' ');
				cin.getline(vd, 20, ' ');
				cin.getline(mt, 20, ' ');
				TrajetSimple traj = new TrajetSimple(vd, va, mt)
				ll.Ajouter(&traj);
				cin.getline(command, 20);
				cout << "  vd: " << vd << "  va: " << va << "  mt: " << mt << endl;
			}
			TrajetCompose tc = new TrajetCompose(ll);
			catalog.Ajouter(&tc;
			cout << "Ajoute"<< endl;
		}else if(!strcmp(command, "afficher")){
			catalog.Afficher();
		}else if(!strcmp(command, "recherches")){
			cin.getline(vd, 20, ' ');
			cin.getline(va, 20);
			catalog.Recherches(vd, va);
			cout << "Les resultats de la recherche simple sont"<<endl;
		}else if(!strcmp(command, "recherchea")){
			cin.getline(vd, 20, ' ');
			cin.getline(va, 20);
			cout << "Les resultats de la recherche avance sont"<<endl;
			catalog.RechercheA(va, vd);
		}
		cin.getline(command, 20, '\n');
	}
	delete catalog;
	delete [] command;
	delete [] va;
	delete [] vd;
	delete [] mt;
}
