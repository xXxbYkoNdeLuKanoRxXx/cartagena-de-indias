#include<iostream>
using namespace std;
int multiplicacion(int num1,int num2,int num3,int num4){
    int respuesta;
    respuesta=num1*num2*num3*num4;
    return respuesta;
    
}
int main(){
    int num1,num2,num3,num4;
    char salir;
    cout<< " introdusca un memero ";
    cin>>num1;
    cout<< " introdusca un tercer memero xd ";
    cin>>num2;
    cout<< " JA JA JA JA creihte que era el terser memero turro pero te quedan dos mas no seas pelotudo e introduce uno mas ";
    cin>>num3;
    cout<< " introduzca un ultimo y anhelado cuarto memero ";
    cin>>num4;
    cout<< " la respuesta es ";
    cout<< multiplicacion(num1,num2,num3,num4);
    cout<< "introduce cualquier tecla poara salir";
    cin>> salir;
    return 0;
    
    }
