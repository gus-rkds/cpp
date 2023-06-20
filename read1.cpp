/*Programa para probar la lectura "parcial" de un archivo texto. Los datos leídos se presentarán 
en pantalla. Se empleará la librería "fstream"

Elaborado por: Carlos Ferrer 
Fecha: 12 de Enero de 2023*/

#include<iostream>
#include<fstream>
using namespace std;

main()
{
	string palabra1,palabra2,palabra3,palabra4; //variables tipo string
	
	/*Voy a ponerle a la función "usm". Esta función enlaza el programa con la libreria fstream
	ifstream significa lectura desde un archivo - input usando fstream*/
	
	ifstream usm; 
	
	
	/*El open abre el archivo. Se debe colocar los dos barras invertidas backslah.
	el ios::in permite lectura desde el archivo*/
	usm.open("C:\\Users\\Sheila Orta\\OneDrive\\Desktop\\yoyo.txt",ios::in); 

	/*Voy a verificar si la apertura del archivo falló, si así fue le digo que se salga
	  del programa, esto podría pasar debido a que el archivo no existe o fue mal escrito.
	  La función fail se activa si la apertura del archivo falla.*/
	
	if(usm.fail()) 
	{
		cout <<"El archivo no pudo abrirse"<<endl;
		exit(0);
	}
	
	// Procedemos a leer del archivo
    usm >>palabra1;
    usm >>palabra2;
	usm >>palabra3;
	usm >>palabra4;
    
    // Cierro el archivo
    usm.close();
	
	//Presento los datos en la consola
	cout <<palabra1<<" "<<palabra2<<" "<<palabra3<<" "<<palabra4<<endl<<endl;
	system("pause");	
}