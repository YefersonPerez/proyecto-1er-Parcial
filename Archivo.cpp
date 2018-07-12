#include "Archivo.h"


Archivo::Archivo()
{
}

void Archivo::crearArchivo()
{
	ofstream Archivo;
	
	cout<<endl<<"Creacion del Archivo"<<endl;
	cout<<endl<<"Nombre del Archivo?: "<<endl;
	cin.sync();
	getline(cin, NombreArchivo);
	
	NombreArchivo+=".txt";
	
	Archivo.open(NombreArchivo.c_str(),ios::out); //CREE EL ARCHIVO
	if(Archivo.fail())
	{
		cout<<endl<<"Fallo"<<endl;
		exit(0);
	}else
	{
		cout<<"Ingrese el Contenido del Archivo"<<endl;
		cin.sync();
		getline(cin, Contenido);

		Archivo<<Contenido; //GUARDA LA CONTENIDO EN EL ARCHIVO
		
		Archivo.close();
	}
	
	ifstream Archivo3;
	
	Archivo3.open(NombreArchivo.c_str(), ios::in);
	
	cout<<endl<<"Contenido del Archivo Creado: "<<endl;
	while(!Archivo3.eof()) //MIENTRAS NO SE A TERMINADO LA CADENA
	{
		getline(Archivo3, Contenido2);
		cout<<endl<<Contenido2<<endl;
	}
	
	Archivo3.close();
	cout<<endl<<"Confirme en el Archivo Creado de extension .txt"<<endl;
	
	system("pause");
	system("CLS");
	system("pause");
}

void Archivo::leerArchivo()
{
	ifstream Archivo2;
	
	Archivo2.open("PRUEBA.txt", ios::in); //NOMBRE DEL ARCHIVO QUE QUIERO MOSTRAR
	cin.sync();
	while(!Archivo2.eof()) //MIENTRAS NO SE A TERMINADO LA CADENA
	{
		getline(Archivo2, Contenido2);
		cout<<Contenido2<<endl;
	}
	
	Archivo2.close();
}

string Archivo::getRecibo()
{
	return Contenido2;
}
