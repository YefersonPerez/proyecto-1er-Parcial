#include "Codificando.h"


Codificando::Codificando()
{
}

void Codificando::RecibirParametro()
{
	//b= Esto es una prueba para el parcial de programacion I de la Unet.
	string Inicio="PRUEBA.txt";
	string Final="ENTEROS.txt";
	ifstream Codigo;
	ofstream Palabra;
	
	char X;
	int var=1;
	int var2=1;
	int numero;
	
	Codigo.open(Inicio.c_str(), ios::in);
	Palabra.open(Final.c_str(), ios::out);
	
	cout<<endl<<"De Prueba.txt (Letras)... Pasara a Enteros.txt (Numeros)"<<endl;
	while(var==1)
	{
		numero=0;
		for(int i=0;(i<4)&&(var2==1);i++)
		{
			Codigo>>X;
			if(Codigo.eof()==0)
			{
				if(i!=0)
				{
					numero>>8;
				}
				numero=numero|(X<<24);
			}
			else
			{
				var=0;
				var2=0;
				numero>>=8*(4-i);
			}
		}
		if(numero!=0)
		{
			Palabra<<numero<<endl;
		}
	}
	cout<<endl<<"Revisa el Enteros.txt"<<endl;
}
