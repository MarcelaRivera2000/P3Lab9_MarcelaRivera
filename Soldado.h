#ifndef SOLDADO_H
#define SOLDADO_H
#include <string>

using namespace std; 

class Binarios;

class Soldado {
	public:
		Soldado(string,int,int);
		string getNombre();
		int getVida();
		int getFuerza();
		void setVida(int);
		void setFuerza(int);
		virtual int asalto(Soldado*)=0;
		virtual int soporte(Soldado*,int)=0;
		
	protected:
		string nombre;
		int p_vida,p_fuerza;
		
		
		
		friend class Binarios;
};


#endif
