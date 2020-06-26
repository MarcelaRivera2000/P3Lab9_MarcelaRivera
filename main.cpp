#include <iostream>
#include <string>
#include <vector>
#include "Soldado.h"
#include "Asalto.h"
#include "Soporte.h"

using namespace std; 
using std::cin;
using std::endl;
using std::cout;

void menu();

vector<Soldado*> Angeles;
vector<Soldado*> Demonios;

int main(int argc, char** argv) {
	while(true){
		menu();
	}
	return 0;
}

void menu(){
	cout<<"-------------- MENU --------------"<<endl<<"1. Crear soldado"<<endl<<"2. Eliminar soldados" <<endl<<"3. Listar soldados"<<endl<<"4. Guardar soldados"<<endl<<"5. Cargar soldados"<<endl <<"6. Simulación "<<endl<<"7. Salir"<<endl<<":";
	int op;
	cin>>op;
	switch(op){
		case 1:{
			string nombre;
			int vida,fuerza,velocidad,extra,blindaje,camuflaje,aux=0;
			int opp,op2;
			cout<<endl<<"--------- TIPO DE SOLDADO --------"<<endl<<"1.Soldado de asalto"<<endl<<"2.Soldado de soporte"<<endl<<":";
			cin>>opp;
			
			cout<<"Nombre"<<endl<<":";
			cin>>nombre;
			cout<<"Vida"<<endl<<":";
			cin>>vida;
			cout<<"Fuerza"<<endl<<":";				
			cin>>fuerza;
			
			switch(opp){
			case 1:{
				aux=1;
				cout<<"Velocidad"<<endl<<":";
				cin>>velocidad;
				cout<<"Fuerza Extra"<<endl<<":";
				cin>>extra;
				break;
			}
			case 2:{
				aux=2;
				cout<<"Blindaje"<<endl<<":";
				cin>>blindaje;
				cout<<"Camuflaje"<<endl<<":";
				cin>>camuflaje;
				break;
			}
			}
			
			cout<<endl<<"------------- EQUIPO -------------"<<endl<<"1.Equipo Angeles"<<endl<<"2.Equipo Demonios"<<endl<<":";
			cin>>op2;
			switch(op2){
				case 1:{
					if (aux==1){
						Angeles.push_back(new Asalto(nombre,vida,fuerza,velocidad,extra));
					}else{
						Angeles.push_back(new Soporte(nombre,vida,fuerza,blindaje,camuflaje));	
					}
					break;
				}
				case 2:{
					if (aux==1){
						Demonios.push_back(new Asalto(nombre,vida,fuerza,velocidad,extra));
					}else{
						Demonios.push_back(new Soporte(nombre,vida,fuerza,blindaje,camuflaje));	
					}
					break;
				}
			}
			break;
		}
		case 2:{
			int op2,aux;
			cout<<endl<<"------------- EQUIPO -------------"<<endl<<"1.Equipo Angeles"<<endl<<"2.Equipo Demonios"<<endl<<":";
			cin>>op2;
			switch(op2){
				case 1:{
					for(int i=0;i<Angeles.size();i++){
						cout<<i<<"."<<Angeles[i]->getNombre()<<endl;
					}
					cout<<"Ingrese la posicion"<<endl<<":";
					cin>>aux;
					Angeles.erase(Angeles.begin() + aux);
					break;
				}
				case 2:{
					for(int i=0;i<Demonios.size();i++){
						cout<<i<<"."<<Demonios[i]->getNombre()<<endl;
					}
					cout<<"Ingrese la posicion"<<endl<<":";
					cin>>aux;
					Demonios.erase(Demonios.begin() + aux);
					break;
				}
			}
			break;
		}
		case 3:{
			int op2;
			cout<<endl<<"------------- EQUIPO -------------"<<endl<<"1.Equipo Angeles"<<endl<<"2.Equipo Demonios"<<endl<<":";
			cin>>op2;
			switch(op2){
				case 1:{
					for(int i=0;i<Angeles.size();i++){
						cout<<i<<"."<<Angeles[i]->getNombre()<<endl;
					}
					break;
				}
				case 2:{
					for(int i=0;i<Demonios.size();i++){
						cout<<i<<"."<<Demonios[i]->getNombre()<<endl;
					}
					break;
				}
			}
			break;
		}
		case 4:{
			
			break;
		}
		case 5:{
			
			break;
		}
		case 6:{
			
			break;
		}
		case 7:{
			exit (EXIT_FAILURE);
			break;
		}
	}
	
}
