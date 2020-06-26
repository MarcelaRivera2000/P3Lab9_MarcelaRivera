#include "Asalto.h"

Asalto:: Asalto(string nombre,int p_vida,int p_fuerza,int v,int f_ext) : Soldado(nombre,p_vida,p_fuerza){
	velocidad=v;
	fuerza_extra=f_ext;	
}

int Asalto::getVelocida(){
	return velocidad;
}

void Asalto::setVelocida(int v){
	velocidad=v;
}

int Asalto::getExtra(){
	return fuerza_extra;
}

void Asalto::setExtra(int v){
	fuerza_extra=v;
}

int Asalto::asalto(Soldado* soldado){
	int ataque;
	if(dynamic_cast<Asalto*>(soldado)){
		ataque=p_fuerza*10;
	}else{
		ataque=p_fuerza*(10+(velocidad*2));
	}
	
	return ataque;
}

int Asalto::soporte(Soldado* soldado,int ataque){
	if(dynamic_cast<Asalto*>(soldado)){
		p_vida=p_vida-ataque;
	}else{
		p_vida=p_vida-(ataque/fuerza_extra);
	}
	return p_vida;
}
