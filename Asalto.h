#ifndef ASALTO_H
#define ASALTO_H
#include "Soldado.h"
#include "Soporte.h"

class Binarios;

class Asalto : public Soldado{
	public:
		Asalto(string,int,int,int,int);
		int getVelocida();
		void setVelocida(int);
		int getExtra();
		void setExtra(int);
		
		int asalto(Soldado*);
		int soporte(Soldado*,int);
	
	protected:
	int velocidad;
	int fuerza_extra;
	
	friend class Binarios;
};

#endif
