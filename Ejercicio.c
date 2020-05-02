#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

	
	
	struct datosjugador
{
	string nombre;
	int edad; 
	int i;
	int n;
	float salario;
	float salario_ordinario=2500;
	float salario_bono_extranjero;
	float salario_final;
};

void perfilesjugadores (string na);
void read_file();
void salario();


void salario(){
	ofstream archivo;
	string nombreArchivo;
	fflush (stdin);
	cout<<"Elija un nombre del archivo; ";
	getline (cin,nombreArchivo);
	
	if (archivo.fail()){
		cout<< "No se pudo abrir el archivo";
		exit (1);
	}
	system ("CLS");
	
}

int main (){
	void perfilesjugadores (string na);
	float edad_jugador;
	string nombre_jugador;
	string nacionalidad_jugador;
	int n;
	
cout <<"Cuantos jugadores desea agregar "<<endl;
cin>>n;
fflush (stdin);

for (int i=0; i<n; i++)
{
	cout<< "Escriba el nombre del jugador "<< i <<endl;
	cin>>nombre_jugador;
	fflush (stdin);
	cout<<"Escriba la edad del jugador "<<i<<endl;
	cin>>edad_jugador;
	cout<<"Escriba la nacionalidad del jugador "<<i<<endl;
	cin>>nacionalidad_jugador;	
	}
	
	if (nacionalidad_jugador!=guatemala)
	salario_bono_extrajero=salario+500;
	
	
	
	return 0;
}
