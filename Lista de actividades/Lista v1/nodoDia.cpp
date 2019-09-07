#include "nodoDia.h"

nodoDia::nodoDia(){
	
	siguiente=NULL;
	primero=NULL;
	ultimo=NULL;
	
}

nodoDia::nodoDia(struct Dia day){
	siguiente=NULL;
	Act=NULL;
	day=day;
}

void nodoDia::setSiguiente(nodoDia *s){
	siguiente=s;
	
}



nodoDia* nodoDia::getSiguiente(){
	return siguiente;
}

void nodoDia::mostrarActividades(){
	Act->recorrer();
}

void nodoDia::InsertarActividades(std::string palabra){
	Act->insertarNodo(palabra);
}




