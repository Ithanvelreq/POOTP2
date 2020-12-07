Main: Main.o TrajetSimple.o Trajet.o LinkedList.o Data.o TrajetCompose.o Catalogue.o
	g++ -o Main TrajetSimple.o Main.o Trajet.o LinkedList.o Data.o TrajetCompose.o Catalogue.o

Catalogue.o: Catalogue.cpp Catalogue.h LinkedList.cpp LinkedList.h Data.h Data.cpp TrajetSimple.cpp TrajetSimple.h TrajetCompose.h TrajetCompose.cpp Trajet.h Trajet.cpp
	g++ -c -DMAP -Wall Catalogue.cpp

TrajetCompose.o: TrajetCompose.cpp TrajetCompose.h Trajet.cpp Trajet.h
	g++ -c -DMAP -Wall TrajetCompose.cpp

LinkedList.o: LinkedList.cpp LinkedList.h Data.cpp Data.h
	g++ -c -DMAP -Wall LinkedList.cpp

Data.o: Data.h Data.cpp
	g++ -c -DMAP -Wall Data.cpp

Main.o:Catalogue.cpp Catalogue.h TrajetSimple.h TrajetSimple.cpp TrajetCompose.cpp TrajetCompose.h Main.cpp
	g++ -c -DMAP -Wall Main.cpp

TrajetSimple.o: TrajetSimple.cpp TrajetSimple.h Trajet.h Trajet.cpp
	g++ -c -DMAP -Wall TrajetSimple.cpp

Trajet.o: Trajet.cpp Trajet.h
	g++ -c -DMAP -Wall Trajet.cpp
