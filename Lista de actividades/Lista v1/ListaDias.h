#ifndef LISTADIAS_H
#define LISTADIAS_H
#include "nodoDia.h"
#include <iostream>
using namespace std;
class ListaDias
{
	public:
		//atributos
		nodoDia *primero;
		nodoDia *ultimo;
		int calendaro=0;
		
		//metodos
		ListaDias();
		void insertarNodo(std::string dia);
		void recorrer();
		void insertarActividad(std::string actividad);
		void mostrarTodo();
};

#endif
