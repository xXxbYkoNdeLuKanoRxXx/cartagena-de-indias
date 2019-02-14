#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
/*este programa genera 3 filas y columnas con numeros al azar*/
int main(){
    int matriz[10][10];
    int fil,col;
    int posx,posy;//posicion donde ira la palabra 
    char palabra[10];
    char lista;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);//inicializador de numeros aleatorios
    //genero la matriz de vletras al azar
    for(fil=0;fil<10;fil++){
        for(col=0;col<10;col++){
           matriz[fil][col]=rand()%25+65;
           cout<<matriz[fil][col]; 
        }
        cout<< "\n";
    }
    posx=rand()%10;
    posy=rand()%10;
    //colocamos un asterisco en esta posicion
    matriz[posx][posy]='*';
    cout<< "nueva matris de nius\n\n";
    //volvemos a sacar por pantalla la matriz
     for(fil=0;fil<10;fil++){
        for(col=0;col<10;col++){
           cout<< matriz[fil][col]; 
        }
        cout<< "\n";
    }
    cout<< "introduce una palabra";
    cin>> palabra;
     
    cout<< "toque cualquier niu para salir";
    cin>> salir;
    return 0;
}
