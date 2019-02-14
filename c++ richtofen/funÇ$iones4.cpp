#include<iostream>
using namespace std;
float dolares(float num1){
    float respuesta;
    respuesta=(num1*0.88);
    return(respuesta);
    
}
int main(){
    float num1;
    char salir;
    cout<< " introdusca un memero ";
    cin>>num1;
    cout<< dolares(num1);
    cout<< " no tiene vusted ni para pipas, pobre de mierdaygku2hui1 ";
    cout<< "\n introduce cualquier tecla poara salir";
    cin>> salir;
    return 0;
}
