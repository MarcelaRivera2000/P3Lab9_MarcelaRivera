#ifndef SOPORTE_H
#define SOPORTE_H
#include "Soldado.h"
#include "Asalto.h"

class Binarios;

class Soporte : public Soldado{
	public:
		Soporte(string,int,int,int,int);
		int getBlindaje();
		void setBlindaje(int);
		int getCamuflaje();
		void setCamuflaje(int);
		
		int asalto(Soldado*);
		int soporte(Soldado*,int);
		
	protected:
	int blindaje;
	int camuflaje;
	
	friend class Binarios;
};

#endif
