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
	int may_m=-100;
	int aux=-100;
	cout<<"Ingrese un pais: "; 
	cin.ignore(); getline(cin, p);
	cout<<"\n\tAtletas de "<<p<<endl;
	for(int i=0; i<n; i++){
		if(p==atleta[i].pais){
			cout<<"\n\tAtleta "<<i+1<<endl;
			cout<<"Nombre: "<<atleta[i].nombre<<endl;
			cout<<"Pais: "<<atleta[i].pais<<endl;
			cout<<"Disciplina: "<<atleta[i].disciplina<<endl;
			cout<<"Medallas: "<<atleta[i].medallas<<endl;
			if(atleta[i].medallas>may_m){
				may_m=atleta[i].medallas;
				aux=i;
			}
		}
	}
	if(aux!=-100){
		cout<<"\nEl atleta con mayor medallas del pais "<<p<<" es: "<<endl;
		cout<<atleta[aux].nombre<<" con "<<atleta[aux].medallas<<" medallas"<<endl;
	}
	else{
		cout<<"\nCero Atletas registrados del pais "<<p<<endl;
	}
	return 0;
}
