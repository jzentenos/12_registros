#include<iostream>
#include<string>
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
	for(int i=0; i<n; i++){
		cout<<"\n\tPersona "<<i+1<<endl;
		cout<<"Nombres completos: ";
		cin.ignore(); getline(cin,persona[i].nombre);
		cout<<"DNI: "; cin>>persona[i].DNI;
		cout<<"Edad: "; cin>>persona[i].edad;
	}
	int cont=0;
	for(int i=0; i<n; i++){
		if(persona[i].edad>50){
			cont++;
		}
	}
	cout<<"\n\tCantidad de personas mayores a 50 a�os"<<endl;
	cout<<cont;

	
	for(int i=0; i<n; i++){
		cout<<"\n\tPersona "<<i+1<<endl;
		cout<<"\nNombres completos: "<<persona[i].nombre;
		cout<<"\nDNI: "<<persona[i].DNI;
		cout<<"\nEdad: "<<persona[i].edad;		
	}
	
	return 0;
}
