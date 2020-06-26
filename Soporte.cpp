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

int Soporte::asalto(Soldado* soldado){
	int ataque;
	if(dynamic_cast<Asalto*>(soldado)){
		ataque=p_fuerza*(15+camuflaje);
	}else{
		ataque=p_fuerza*10;
	}
	
	return ataque;
}

int Soporte::soporte(Soldado* soldado,int ataque){
	if(dynamic_cast<Asalto*>(soldado)){
		p_vida=p_vida-(ataque/(blindaje*2));
	}else{
		p_vida=p_vida-ataque;
	}
	return p_vida;
}

