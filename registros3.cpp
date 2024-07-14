#include<iostream>
using namespace std;
struct DATA{
	string nombre;
	int dia;
	int mes;
	int periodo;
};
int main(){
	DATA datos[1000];
	int n;
	cout<<"Cantidad de personas: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"\n\tPersona "<<i+1<<endl;
		cout<<"Nombre completo: "; cin.ignore(); getline(cin, datos[i].nombre);
		cout<<"Numero del mes de nacimiento: "; cin>>datos[i].mes;
		cout<<"Dia de nacimiento: "; cin>>datos[i].dia;
		cout<<"Año de nacimiento: "; cin>>datos[i].periodo;
	}
	int m;
	int cont=0;
	do{
		cout<<"Ingrese el numero de un mes: "; cin>>m;
		cout<<"\n\tPersonas que cumplen el mes numero "<<m<<endl;
		for(int i=0; i<n; i++){
			if(m==datos[i].mes){
				cout<<"\nNombre: "<<datos[i].nombre<<endl;
				cout<<"Dia de naciminto: "<<datos[i].dia<<endl;
				cout<<"Mes de nacimiento: "<<datos[i].mes<<endl;
				cout<<"Año de nacimiento: "<<datos[i].periodo<<endl;
				cont=1;
			}
			else{
				cont=0;
			}
		}	
		if(cont==0){
			cout<<"\nNo existe personas que cumplan años en el mes "<<m<<endl;
		}
	}while(m!=0);
	return 0;
}
