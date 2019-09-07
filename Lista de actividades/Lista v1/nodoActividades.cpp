#include "nodoActividades.h"

nodoActividades::nodoActividades(){
	siguiente=NULL;
	anterior=NULL;
}

nodoActividades::nodoActividades(struct Actividades a){
	siguiente=NULL;
	anterior=NULL;
	a=a;
}

void nodoActividades::setAnterior(nodoActividades *ant){
	anterior=ant;
}

void nodoActividades::setSiguiente(nodoActividades *sig){
	siguiente=sig;
}

void nodoActividades::setActividades(struct Actividades a){
	a=a;
}

nodoActividades* nodoActividades::getAnterior(){
	return anterior;
}

nodoActividades* nodoActividades::getSiguiente(){
	return siguiente;
}


