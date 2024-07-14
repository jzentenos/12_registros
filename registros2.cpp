#include<iostream>
#include<string.h>
using namespace std;
struct PER{
	string nombre;
	char DNI[100]; 
	int edad;
};
int main(){
	int n;
	cout<<"Ingrese la cantidad de personas: "; cin>>n;
	PER persona[n];
	int lon; // almacena la cantidad de caracteres de el DNI
	//Lectura de los datos de n personas
	for(int i=0; i<n; i++){
		cout<<"\n\tPersona "<<i+1<<endl;
		cout<<"Nombres completos: ";
		cin.ignore(); getline(cin,persona[i].nombre);
		cout<<"DNI: "; cin>>persona[i].DNI;
		lon= strlen(persona[i].DNI);
		//Validacion de la cantidad de caracteres del DNI
		if(lon>8){
			cout<<"DNI incorrecto. \nIngrese nuevamente: "; cin>>persona[i].DNI;
		}
		cout<<"Edad: "; cin>>persona[i].edad;
	}
	int cont=0;
	float s_edades=0;
	//Personas mayores a 50 años
	for(int i=0; i<n; i++){
		if(persona[i].edad>50){
			cont++;
		}
		//suma de edades 
		s_edades+=persona[i].edad;
	}
	//Promedio de edades
	float prom=s_edades/n;
	cout<<"\n\tCantidad de personas mayores a 50 años"<<endl;
	cout<<cont;
	cout<<"\n\tPromedio de edades"<<endl;
	cout<<prom;
	//Impresion de los datos de las personas registradas
	for(int i=0; i<n; i++){
		cout<<"\n\tDatos de la persona "<<i+1<<endl;
		cout<<"\nNombres completos: "<<persona[i].nombre;
		cout<<"\nDNI: "<<persona[i].DNI;
		cout<<"\nEdad: "<<persona[i].edad;		
	}
	
	return 0;
}
