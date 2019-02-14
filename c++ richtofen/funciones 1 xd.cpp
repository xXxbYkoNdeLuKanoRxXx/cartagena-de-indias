#include<iostream>
using namespace std;
int mayor(int num1,int num2,int num3){
    int respuesta;
    if(num1>num2 && num1>num3){
                 respuesta=num1;

    }
    if(num2>num1 && num2>num3){
       respuesta=num2;
                     
    }
    if(num3>num1 && num3>num2){
          respuesta=num3; 
    }
    return respuesta;
}


int main(){
    char salir;
    int num1,num2,num3,respuesta;
    cout<< " introduce un numero ";
    cin>> num1;
    cout<< " introduce otro numero ";
    cin>> num2;
    cout<< " introduce un tercer memero ";
    cin>> num3;
    //INVOVO A LA SOLUCIOOOOOON
    cout<< " el mayor niu es: "<<mayor(num1,num2,num3);
    
    //leo un numero entero
    
    //leo otro numero entero 
    
    //lo envío a una funcion que los compare
    cout<< " toque cualquier niu para salir ";
    cin>> salir;
    return 0;
    
}
