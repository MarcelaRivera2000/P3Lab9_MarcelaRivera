#include "Binarios.h"

Binarios::Binarios(string f){
		fileName = f;
		
}

void Binarios::Escribir(vector<Soldado*> angeles){
	ofstream outputFile (fileName.c_str(), std::ios::binary | std::ios::trunc);
	if(outputFile.is_open()){
		
 	for(int i=0;i<angeles.size();i++){
 		int sizeNombre = angeles[i]->nombre.size();
		//guardar size nombre
 		outputFile.write(reinterpret_cast<char*>(&sizeNombre), (int)sizeof(int) );
		//guardar el nombre 
		outputFile.write(angeles[i]->nombre.data(),sizeNombre);
		//guardar vida
 		outputFile.write(reinterpret_cast<char*>(&angeles[i]->p_vida), (int)sizeof(int));
 		//guardar fuerza
 		outputFile.write(reinterpret_cast<char*>(&angeles[i]->p_fuerza), (int)sizeof(int));
 		
 		if(dynamic_cast<Asalto*>(angeles[i])){
 			outputFile.write(reinterpret_cast<char*>(1), (int)sizeof(int));
			Asalto* x =dynamic_cast<Asalto*>(angeles[i]);
			//guardar velocidad
			outputFile.write(reinterpret_cast<char*>(&x->velocidad), (int)sizeof(int));
			//guardar fuerza extra
			outputFile.write(reinterpret_cast<char*>(&x->fuerza_extra), (int)sizeof(int));
		}else{
			outputFile.write(reinterpret_cast<char*>(0), (int)sizeof(int));
			Soporte* x =dynamic_cast<Soporte*>(angeles[i]);
			//guardar brindaje
			outputFile.write(reinterpret_cast<char*>(&x->blindaje), (int)sizeof(int));
			//guardar camuflaje
			outputFile.write(reinterpret_cast<char*>(&x->camuflaje), (int)sizeof(int));
		}
		
	 }
	}	
}

vector<Soldado*> Binarios::leer(){
	vector<Soldado*> retValue;
	ifstream inputFile (fileName.c_str(), std::ios::binary | std::ios::trunc);
	while(!inputFile.eof()){
	 	int nameSize=0,vida=0, fuerza=0;
	 	int x;
	 	int velocidad,fuerza_extra;
	 	int blindaje,camuflaje;
	 	
	 	//leer el tamaño del nombre 
	 	inputFile.read(reinterpret_cast<char*>(&nameSize),sizeof(int));
	 	char bufferNombre[100];
	 	
	 	//leer el nombre
	 	inputFile.read(bufferNombre,nameSize);
	 	string nombre = bufferNombre;
	 	
	 	//leer vida
	 	inputFile.read(reinterpret_cast<char*>(&vida),sizeof(int));
	 	
	 	//leer fuerza
	 	inputFile.read(reinterpret_cast<char*>(&fuerza),sizeof(int));
	 	
	 	inputFile.read(reinterpret_cast<char*>(&x),sizeof(int));
	 	
	 	if(x==1){
	 		inputFile.read(reinterpret_cast<char*>(&velocidad),sizeof(int));
			inputFile.read(reinterpret_cast<char*>(&fuerza_extra),sizeof(int));	
			retValue.push_back(new Asalto(nombre,vida,fuerza,velocidad,fuerza_extra));
		}else if(x==0){
			inputFile.read(reinterpret_cast<char*>(&blindaje),sizeof(int));
			inputFile.read(reinterpret_cast<char*>(&camuflaje),sizeof(int));	
			retValue.push_back(new Asalto(nombre,vida,fuerza,blindaje,camuflaje));
		}
	 }
	 
	 return retValue; 
}













