#ifndef NODODIA_H
#define NODODIA_H
#include <iostream>
#include "nodoActividades.h"
#include "ListaActividades.h"

struct Dia{
	std::string day;
	int id;
};

class nodoDia
{
	public:
		//atributos
	struct Dia day;
	nodoDia *siguiente;
	ListaActividades *Act = new ListaActividades();
	nodoActividades *primero;
	nodoActividades *ultimo;
	//metodos
	nodoDia();
	nodoDia(struct Dia day);
	void setSiguiente(nodoDia *s);
	nodoDia* getSiguiente();
	nodoActividades* getActividad();
	void mostrarActividades();
	void InsertarActividades(std::string palabra);
	
};

#endif
