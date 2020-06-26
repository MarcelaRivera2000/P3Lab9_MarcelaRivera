#ifndef SOPORTE_H
#define SOPORTE_H
#include "Soldado.h"

class Soporte : public Soldado{
	public:
		Soporte(string,int,int,int,int);
		int getBlindaje();
		void setBlindaje(int);
		int getCamuflaje();
		void setCamuflaje(int);
		
		int asalto();
		int soporte();
		
	protected:
	int blindaje;
	int camuflaje;
};

#endif
