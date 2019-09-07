#ifndef LISTAACTIVIDADES_H
#define LISTAACTIVIDADES_H
#include "nodoActividades.h"
#include <iostream>
using namespace std;

class ListaActividades
{
	public:
		//atributos
		nodoActividades *primero;
		nodoActividades *ultimo;
		
		//metodos
		ListaActividades();
		void insertarNodo(std::string actividad);
		void recorrer();
		
};

#endif
