#ifndef CODIFICANDO_H
#define CODIFICANDO_H
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <vector>

#include "Archivo.h"

using namespace std;

class Codificando: public Archivo
{
	private:
		
	public:
		Codificando();
		void RecibirParametro();
	protected:
};

#endif
