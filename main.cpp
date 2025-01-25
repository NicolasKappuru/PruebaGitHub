#include <iostream>
#include "ArbolRojiNegro.h"
#include "Cola.h"
#include "Struct.h"

int main() {

	ArbolRojiNegro arbol;
	
	cout << "Utilizaremos la estructura [Clave]"<<endl; 
	cout << "Se inserto?: " << arbol.insertar(100) << endl;
	cout << "Se inserto?: " << arbol.insertar(150) << endl;
	cout << "Se inserto?: " << arbol.insertar(50) << endl;
	cout << "Se inserto?: " << arbol.insertar(30) << endl;
	cout << "Se inserto?: " << arbol.insertar(75) << endl;
	cout << "Se inserto?: " << arbol.insertar(125) << endl;
	cout << "Se inserto?: " << arbol.insertar(170) << endl;
	cout << "Se inserto?: " << arbol.insertar(10) << endl;
	cout << endl;
	
//	cout << "Buscar info del nodo 125: [" << arbol.buscarNodo(125)->clave<< "]"<< endl;
//	cout << "Buscar info del padre del nodo 125: ["<< arbol.buscarPadre(125,arbol.traerRaiz())->clave<<"," << arbol.buscarPadre(125,arbol.traerRaiz())->info<<"]"<<endl;
	cout << endl;

	cout << "Los recorridos se realizaron por medio de las claves"<< endl;
	cout << "Recorrido inorden: ";
	Cola<int>* colaInorden; 
	colaInorden = arbol.inorden();
	while (!colaInorden->colaVacia()) {
        int actual = colaInorden->atender(); 
        cout << "["<< actual << "] "; 
    }
    cout << endl; 
    		
	cout << "Recorrido preorden: ";
	Cola<int>* colaPreorden; 
	colaPreorden = arbol.preorden(); 
	while (!colaPreorden->colaVacia()) {
        int actual = colaPreorden->atender(); 
        cout << "["<< actual <<"] "; 
    }
    cout << endl; 
    
	cout << "Recorrido posorden: ";
	Cola<int>* colaPosorden; 
	colaPosorden = arbol.posorden(); 
	while (!colaPosorden->colaVacia()) {
        int actual = colaPosorden->atender(); 
        cout << "["<< actual <<"] "; 
    }
    cout << endl; 
	
	cout << "Recorrido por niveles: ";
	Cola<int>* colaPorNiveles; 
	colaPorNiveles = arbol.porNiveles(); 
	while (!colaPorNiveles->colaVacia()) {
        int actual = colaPorNiveles->atender(); 
        cout << "["<< actual <<"] "; 
    }
    cout << endl; 
	
	/*
	cout <<  "Eliminamos a 30? " << arbol.eliminar(30)<<endl;
	cout <<  "Eliminamos a 170? " << arbol.eliminar(170)<<endl;
	cout <<  "Eliminamos a 150? " << arbol.eliminar(150)<<"\n";
	cout << endl; 

	cout << "Los recorridos se realizaron por medio de las claves"<< endl;
	cout << "Recorrido inorden: ";
	colaInorden = arbol.inorden();
	while (!colaInorden->colaVacia()) {
        nodo nodoActual = colaInorden->atender(); 
        cout << "["<<nodoActual.clave << "," << nodoActual.info<<"] "; 
    }
    cout << endl; 
    		
	cout << "Recorrido preorden: ";
	colaPreorden = arbol.preorden(); 
	while (!colaPreorden->colaVacia()) {
        nodo nodoActual = colaPreorden->atender(); 
        cout << "["<<nodoActual.clave << "," << nodoActual.info<<"] "; 
    }
    cout << endl; 
    
	cout << "Recorrido posorden: ";
	colaPosorden = arbol.posorden(); 
	while (!colaPosorden->colaVacia()) {
        nodo nodoActual = colaPosorden->atender(); 
        cout << "["<<nodoActual.clave << "," << nodoActual.info<<"] "; 
    }
    cout << endl; 
    */
    return 0;
}


