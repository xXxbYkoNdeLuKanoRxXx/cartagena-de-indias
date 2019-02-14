#include<iostream>
using namespace std;
int media(float num1,float num2,float num3,float num4){
    float respuesta;
    respuesta=(num1+num2+num3+num4)/4;
    return(respuesta);
}

int main(){
    char salir;
    float num1,num2,num3,num4;
    cout<< " introdusca un memero ";
    cin>> num1;
    cout<<" introduzca otro mememero ";
    cin>>num2;
    cout<<" introduzca un cuarto memeo ";
    cin>> num3;
    cout<<" JA JA JA JA, creiste que era el ultimo memero turro, escribe otro no me seas pelotudo ";
    cin>> num4;
    cout<<media(num1,num2,num3,num4);
    cout<< "\n presione cualquier memero para salir ";
    cin>> salir;
    return 0;
}
