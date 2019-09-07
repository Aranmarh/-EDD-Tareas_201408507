#include "ListaDias.h"

ListaDias::ListaDias(){
	primero=0;
	ultimo=0;
	calendaro=0;
	
}

void ListaDias::insertarNodo(std:: string dia){
	nodoDia *nuevo = new nodoDia();
	nuevo->day.day=dia;
//	nuevo->day.id=calendaro;

	 if(primero==0){
        primero = nuevo;
        ultimo=nuevo;
    }else{
        
        nuevo->setSiguiente(NULL);
        ultimo->setSiguiente(nuevo);
        ultimo = nuevo;
    }
//	calendaro=calendaro+1;
//	cout<<calendaro<<endl;
}

void ListaDias::recorrer(){
	nodoDia *actual=primero;
	cout<<"-----dias ingresados---"<<endl;
	while(actual!=NULL){
		cout<<actual->day.day<<endl;
//		cout<<actual->day.id<<endl;
		actual=actual->getSiguiente();
	}
	cout<<"-------------------------------";

	
	
}


void ListaDias::insertarActividad(std::string Actividad){
	
	nodoDia *actual=ultimo;
	ultimo->InsertarActividades(Actividad);
}

void ListaDias::mostrarTodo(){
	cout<<"----dia y sus actividades----"<<endl;
	nodoDia *actual = primero;
	while(actual!=NULL){
		cout<<actual->day.day<<endl;
		actual->mostrarActividades();
		actual=actual->getSiguiente();
	}
	cout<<"----fin de los dias-----"<<endl;
}
