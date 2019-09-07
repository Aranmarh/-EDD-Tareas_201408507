#include "ListaActividades.h"

ListaActividades::ListaActividades(){
	primero=0;
	ultimo=0;
}


void ListaActividades::insertarNodo(std:: string actividad){
	nodoActividades *nuevo = new nodoActividades();
    nuevo->a.activities=actividad;
      if(primero==0){
        primero = nuevo;
        ultimo=nuevo;
    }else{
        nuevo->setAnterior(ultimo);
        nuevo->setSiguiente(NULL);
        ultimo->setSiguiente(nuevo);
        ultimo = nuevo;
    }
}

void ListaActividades::recorrer(){
	
	nodoActividades *actual = primero;
    while(actual!=NULL){
       	cout<<actual->a.activities<<endl;
        actual=actual->getSiguiente();
    }
    cout<<"=====fin de actividad diaria====="<<endl;
}
