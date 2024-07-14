#include<iostream>
#include<string.h>
using namespace std;
struct INFO{
	string nombre;
	string pais;
	string disciplina;
	int medallas;
};
int main(){
	INFO atleta[1000];
	int n;
	cout<<"Numero de atletas a registrar: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"\n\tAtleta "<<i+1<<endl;
		cout<<"Nombre: "; cin.ignore(); getline(cin, atleta[i].nombre);
		cout<<"Pais: "; getline(cin, atleta[i].pais);
		cout<<"Disciplina: "; getline(cin, atleta[i].disciplina);
		cout<<"Cantidad de medallas: "; cin>>atleta[i].medallas;
	}
	string p;
	cout<<"Ingrese un pais: "; 
	cin.ignore(); getline(cin, p);
	for(int i=0; i<n; i++){
		if(p==atleta[i].pais){
			cout<<"Atleta "<<i+1<<endl;
			cout<<"Nombre: "<<atleta[i].nombre<<endl;
			cout<<"Pais: "<<atleta[i].pais<<endl;
			cout<<"Disciplina: "<<atleta[i].disciplina<<endl;
			cout<<"Medallas: "<<atleta[i].medallas<<endl;
		}
		
	}
	return 0;
}
