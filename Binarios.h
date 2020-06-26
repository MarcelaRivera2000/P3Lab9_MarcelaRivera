#ifndef BINARIOS_H
#define BINARIOS_H
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Asalto.h"
#include "Soporte.h"


using namespace std; 

class Binarios{
	public:
		Binarios(string);
		vector<Soldado*> leer();
		void Escribir(vector<Soldado*>);
		
	protected:
		string fileName;
};

#endif
