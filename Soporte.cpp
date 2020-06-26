#include "Soporte.h"

Soporte:: Soporte(string nombre,int p_vida,int p_fuerza,int b,int c) : Soldado(nombre,p_vida,p_fuerza){
	blindaje=b;
	camuflaje=c;
	
}

int Soporte::getBlindaje(){
	return blindaje;
}

void Soporte::setBlindaje(int v){
	blindaje=v;
}

int Soporte::getCamuflaje(){
	return camuflaje;
}

void Soporte::setCamuflaje(int v){
	camuflaje=v;
}

int Soporte::asalto(){
	
}

int Soporte::soporte(){
	
}

