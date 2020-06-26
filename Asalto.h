#ifndef ASALTO_H
#define ASALTO_H
#include "Soldado.h"

class Asalto : public Soldado{
	public:
		Asalto(string,int,int,int,int);
		int getVelocida();
		void setVelocida(int);
		int getExtra();
		void setExtra(int);
		
		int asalto();
		int soporte();
	
	protected:
	int velocidad;
	int fuerza_extra;
};

#endif
