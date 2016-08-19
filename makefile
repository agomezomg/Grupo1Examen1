clases:	Examen1.o Pokemon.o
	g++ Examen1.o Pokemon.o -o clases

clases.o: clases.cpp Pokemon.h
	g++ -c Pokemonb.cpp

TrianguloPascal: Pokemon.h Pokemon.cpp
	g++ -c Pokemon.cpp	