#include<iostream>
#include<string>
using namespace std;
struct EMP{
	string nombre;
	string sexo;
	float sueldo;
};
int main(){
	EMP empleado[1000];
	int n;
	cout<<"Empleados de DataTech: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"\n\tEmpleado "<<i+1<<endl;
		cout<<"Nombre: ";
		cin.ignore(); getline(cin, empleado[i].nombre);
		cout<<"Sexo: "; 
		getline(cin, empleado[i].sexo);
		cout<<"Sueldo: "; cin>>empleado[i].sueldo;
		}
	
	for(int i=0; i<n; i++){
		cout<<"\n\tEmpleado "<<i+1;
		cout<<"\nNombre: "<<empleado[i].nombre;
		cout<<"\nSexo: "<<empleado[i].sexo;
		cout<<"\nSueldo: "<<empleado[i].sueldo; 
	}
	return 0;
}
