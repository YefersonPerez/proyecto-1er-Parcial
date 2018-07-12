#include <iostream>
#include "Archivo.h"
#include "Codificando.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {

	Archivo *a = new Archivo();
	a->crearArchivo();
	a->leerArchivo();
	
	string recibo;
	recibo=a->getRecibo();
	
	//cout<<endl<<"Prueba.txt ->"<<recibo<<endl;
	
	Codificando *v = new Codificando();
	v->RecibirParametro();
	
	return 0;
}
