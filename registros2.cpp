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
	float s_edades=0;
	for(int i=0; i<n; i++){
		if(persona[i].edad>50){
			cont++;
		}
		s_edades+=persona[i].edad;
	}
	float prom=s_edades/n;
	cout<<"\n\tCantidad de personas mayores a 50 años"<<endl;
	cout<<cont;
	cout<<"\n\tPromedio de edades"<<endl;
	cout<<prom;
	
	for(int i=0; i<n; i++){
		cout<<"\n\tPersona "<<i+1<<endl;
		cout<<"\nNombres completos: "<<persona[i].nombre;
		cout<<"\nDNI: "<<persona[i].DNI;
		cout<<"\nEdad: "<<persona[i].edad;		
	}
	
	return 0;
}
