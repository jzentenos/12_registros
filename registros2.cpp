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
	for(int i=0; i<n; i++){
		cout<<"\n\tPersona "<<i+1<<endl;
		cout<<"\nNombres completos: "<<persona[i].nombre;
		cout<<"\nDNI: "<<persona[i].DNI;
		cout<<"\nEdad: "<<persona[i].edad;		
	}
	return 0;
}
