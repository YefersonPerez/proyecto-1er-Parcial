#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class Archivo
{
	private:
		string Contenido;
		string Contenido2;
		string NombreArchivo;
	public:
		Archivo();
		void crearArchivo();
		void leerArchivo();
		string getRecibo();
	protected:
};

#endif
