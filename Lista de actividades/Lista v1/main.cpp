#include <iostream>
#include "ListaActividades.h"
#include "ListaDias.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
/*	 ListaActividades *lista = new ListaActividades();
	 lista->insertarNodo("irme de peda");
	 lista->insertarNodo("estudiar");
	 lista->insertarNodo("programar :,v");
	 lista->recorrer(); 
*/

	ListaDias *dia = new ListaDias();
	dia->insertarNodo("sabado");
	dia->insertarActividad("Dormir");
	dia->insertarActividad("jugar lol");
	dia->insertarNodo("Domingo");
	dia->insertarActividad("Lavar ropa");
	dia->insertarNodo("lunes");
	dia->insertarActividad("ir a clases");
	dia->insertarActividad("ir a programar");
	dia->insertarNodo("martes");
	dia->insertarActividad("ir a edd");
	dia->mostrarTodo();	
	dia->recorrer();
	return 0;
}
