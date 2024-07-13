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
	
	int maxVenA=0;
	int pos=0;
	float ven[n];
	for(int i=0; i<n; i++){
		ven[i]=0;
		for(int j=0; j<12; j++){
			ven[i]+=EMPLEADO[i].ventas[j];
			if(ven[i]>maxVenA){
				maxVenA=ven[i];
				pos=i;
			}
		}
	}
	cout<<"\tEmpleado con mayores ventas\n";
	cout<<"\nNumero: "<<EMPLEADO[pos].numero;
	cout<<"\nNombre: "<<EMPLEADO[pos].nombre;
	cout<<"\t\nEmpleados con el sueldo aumentado\n";
	for(int i=0; i<n; i++){
		if(ven[i]>100){
			EMPLEADO[i].salario=EMPLEADO[i].salario * 1.1;
			cout<<"\nSalario del empleado numero "<<EMPLEADO[i].numero<<": "<<EMPLEADO[i].salario;
		}	
	}
	cout<<endl;
	cout<<"\t\nEmpleado con la menor venta en diciembre\n";

	for(int i=0; i<n; i++){
		//Error corregido: ventas[12] a ventas[11]
		if(EMPLEADO[i].ventas[11]<30){
			cout<<"\nVentas: "<<EMPLEADO[i].ventas[11];
			cout<<"\nNumero: "<<EMPLEADO[i].numero;
			cout<<"\nNombre: "<<EMPLEADO[i].nombre;
			cout<<endl;
		}
	}
	return 0;
}
