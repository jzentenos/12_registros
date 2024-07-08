#include<iostream>
#include<string.h>
using namespace std;
struct EMP{
		int numero;
		string nombre;
		float ventas[12];
		float salario;
	};
int main(){
	EMP EMPLEADO[50];
	
	int n;
	cout<<"Cantidad de empleados: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Numero del empleado: "; cin>>EMPLEADO[i].numero;
		cout<<"Nombre del empleado: "; cin>>EMPLEADO[i].nombre;
		for(int j=0; j<12; j++){
			cout<<j+1<<".-Venta: "; cin>>EMPLEADO[i].ventas[j];
		}
		cout<<"Salario del empleado "<<i+1<<": "; cin>>EMPLEADO[i].salario;
	}
	
	return 0;
}