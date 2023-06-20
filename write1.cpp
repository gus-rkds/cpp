/*Programa para probar la creación de un archivo texto y el vaciado de datos
dentro del archivo usando la libreria "fstream"

Elaborado por: Carlos Ferrer 
Fecha: 12 de Enero de 2023*/




#include<iostream>
#include<fstream>
using namespace std;

main()
{
	int cantidad=79; //Cantidad de alumnos
	
	/*Voy a ponerle a la función "verde". Esta función enlaza el programa con la librería
	ofstream significa salida usando fstream - Output fstream*/

	ofstream verde; 
	
	
	/*El open crea y abre el archivo. Se debe colocar los dos barras invertidas backslah.
	el ios::out hace que si el archivo existe cada vez que se corre el programa el 
	archivo es sobreescrito*/
	verde.open("C:\\Users\\Carlos Javier\\Desktop\\yoyo.txt",ios::out); 
	

	
	
	/*Voy a verificar la apertura del archivo falló, si asi fue le digo que se salga
	  del programa, esto podria pasar debido a que no hay espacio en el disco duro
	  o porque tu antivirus los borra, asegurense de desactivar el antivirus mientras hace
	  esta prueba.
	
	   La función fail se activa si la apertura del archivo falla.*/
	
	if(verde.fail()) 
	{
		cout <<"El archivo no pudo abrirse"<<endl;
		exit(0);
	}
	
	// Procedemos a escribir en el archivo
    verde <<"Mi nombre es Carlos Ferrer "<<"soy profesor de Prog I"<<endl;
    verde <<"tengo mas de "<<cantidad<<" de alumnos de Prog I ";
    
    
    // Se recomienda usar la función Flush para limpiar la memoria del programa
    verde.flush();
    // Cierro el archivo
    verde.close();
	
	cout <<"Archivo creado y data ingresada!!"<<endl<<endl;
}
