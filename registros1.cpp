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
	int sue_may=empleado[0].sueldo;
	int sue_min=empleado[0].sueldo;
	for(int i=1; i<n; i++){
		if(empleado[i].sueldo>sue_may){
			sue_may=empleado[i].sueldo;
		}
		if(empleado[i].sueldo<sue_min){
			sue_min=empleado[i].sueldo;
		}
	}
	cout<<sue_may<<endl;
	cout<<sue_min<<endl;
	
	return 0;
}
