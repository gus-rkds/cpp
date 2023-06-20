/*Programa para agregar datos a un archivo de texto existente usando la libreria "fstream"

Elaborado por: Carlos Ferrer 
Fecha: 12 de Enero de 2023*/




#include<iostream>
#include<fstream>
using namespace std;

main()
{
	
	string ruta; //ruta y nombre del archivo a modificar (sin la doble Barra backslah)
	int cantidad_damas=34; //Cantidad de Señoritas en la clase
	
	
	//Ingresamos la ruta y el nombre del archivo a modificar
	cout <<"Ingrese ruta y nombre de archivo, recuerde colocar"<<endl;
	cout <<"la extension del archivo:"<<endl;
	getline (cin,ruta);
	
	
	/*Voy a ponerle a la función "zapato". Esta función enlaza el programa con la librería
        ofstream significa salida usando fstream - Output fstream*/

	ofstream zapato; 
	
	
	/*El open abre el archivo. A la variable que contiene la ruta se le debe colocar c_str
	para poder leer su contenido. El ios::app es el comando que hace que los datos sean 
	agregados al archivo existente*/
	zapato.open(ruta.c_str(),ios::app); 
	

	
	
	/*Voy a verificar la apertura del archivo falló, si asi fue le digo que se salga
	  del programa, esto podría pasar debido a que no hay espacio en el disco duro
	  o porque tu antivirus los borra, asegúrense de desactivar el antivirus mientras hace
	  esta prueba.
	
	  La función fail se activa si la apertura del archivo falla*/
	
	if(zapato.fail()) 
	{
		cout <<"El archivo no pudo abrirse"<<endl;
		exit(0);
	}
	
	// Procedemos a escribir en el archivo
    zapato <<endl<<"de los cuales "<<cantidad_damas<<" son damas."<<endl;
    
    
    
    // Se recomienda usar la función Flush para limpiar la memoria del programa
    zapato.flush();
    // Cierro el archivo
    zapato.close();
	
	cout <<"Archivo creado y data ingresada!!"<<endl<<endl;
}