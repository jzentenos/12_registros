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
	cout<<"Numero: "<<EMPLEADO[pos].numero;
	cout<<"\nNombre: "<<EMPLEADO[pos].nombre;
	cout<<"\nEmpleado con el sueldo aumentado\n";
	for(int i=0; i<n; i++){
		if(ven[i]>100){
			EMPLEADO[i].salario=EMPLEADO[i].salario * 1.1;
			cout<<"Salario "<<i+1<<": "<<EMPLEADO[i].salario;
		}	
	}
	cout<<"\nEmpleado con la menor venta en diciembre\n";
	int menor=EMPLEADO[1].salario;
	for(int i=0; i<n; i++){
		if(EMPLEADO[i].ventas[12]<30){
			menor=EMPLEADO[i].salario;
	}
	return 0;
	}
}