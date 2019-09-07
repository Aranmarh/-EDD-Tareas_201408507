#ifndef NODOACTIVIDADES_H
#define NODOACTIVIDADES_H
#include <iostream>
struct Actividades{
	std::string activities;
};

class nodoActividades
{
	public:
		//atibutos
		struct Actividades a;
		nodoActividades *siguiente;
		nodoActividades *anterior;
		
		//metodos
		nodoActividades();
		nodoActividades(struct Actividades act);
		void setSiguiente(nodoActividades *s);
		void setAnterior(nodoActividades *a);
    	void setActividades(struct Actividades a);
		nodoActividades* getSiguiente();
		nodoActividades* getAnterior();
	
};

#endif
