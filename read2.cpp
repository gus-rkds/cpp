/*Programa para probar la lectura "total" de un archivo texto. Los datos leídos se presentarán 
en pantalla. Se empleará la libreria "fstream"

Elaborado por: Carlos Ferrer 
Fecha: 12 de Enero de 2023*/

#include<iostream>
#include<fstream>
using namespace std;

main()
{
	string texto; //variables tipo string
	
	/*Voy a ponerle a la función "prog1". Esta función enlaza el programa con la libreria fstream
	ifstream significa lectura desde un archivo - input usando fstream*/
	
	ifstream prog1; 
	
	
	/*El open abre el archivo. Se debe colocar los dos barras invertidas backslah.
	el ios::in permite lectura desde el archivo*/
	prog1.open("C:\\Users\\Sheila Orta\\OneDrive\\Desktop\\yoyo.txt",ios::in); 
	

	
	
	/*Voy a verificar si la apertura del archivo falló, si asi fue le digo que se salga
	  del programa, esto podria pasar debido a que el archivo no existe o fue mal escrito.
	  La función fail se activa si la apertura del archivo falla.*/
	
	if(prog1.fail()) 
	{
		cout <<"El archivo no pudo abrirse"<<endl;
		exit(0);
	}
	
	/* Procedemos a leer del archivo y presentamos los datos en la consola,
	esto lo hacemos hasta que lleguemos al fin del archivo - eof = end of file*/

    while(not(prog1.eof()))
    {
    getline(prog1,texto);
	cout <<texto<<endl;	
	}    
        
    // Cierro el archivo
    prog1.close();
	
	cout <<endl;
	system("pause");
	
}