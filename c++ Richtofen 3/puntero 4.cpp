#include<iostream>
#include<string.h>
#include<stdlib.h>

int main(){
	int salir;
	//Definimos el vector de PUNTEROS
	char nletras;
	char cont;
	char palabra;
	char *lista[3];//3 posiciones de memoria que apuntan a 3 palabras
	//Procedimiento
	for(cont=0;cont<=3;cont++){
	//1. Leo una palabra
	     std::cout<<"Palabra: ";
	     std::cin>>palabra;
	//2. Averiguo cuántas letras tiene
	     nletras=strlen(palabra);
	//3. Reservo memoria para guardar la palabra.
	     lista[cont]=malloc(nletras*sizeof(char));
	//4. Escribo la palabra en la memoria resrvada
	//5. Volvemos al punto 1.
	     strcpy(lista[cont],palabra);//copia palabra en lista[0]
    }      
	     printf("\nToca cualquier tecla: ");
         scanf("%i",&salir);
}
