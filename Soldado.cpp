#include "Soldado.h"

Soldado::Soldado(string n,int v,int f){
	nombre=n;
	p_vida=v;
	p_fuerza=f;
}

string Soldado::getNombre(){
	return nombre;
}

int Soldado::getVida(){
	return p_vida;
}

int Soldado::getFuerza(){
	return p_fuerza;
}

void Soldado::setVida(int v){
	p_vida=v;
}

void Soldado::setFuerza(int f){
	p_fuerza=f;
}
