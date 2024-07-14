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

	return 0;
}
