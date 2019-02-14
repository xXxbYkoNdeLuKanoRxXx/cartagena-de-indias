#include<iostream>
/*Este programa sirve par saber leer leer hasta diez numeros*/
using namespace std;
int main(){
    int num[10];
    int i;
    for (i=0;i<=10;i++){
        cout<<"dime un numero";
        cin>> num[i];
        
    }
    int salir;
    //ahora voy a enseñar mis numeros
    cout<<"lista de los numeros:\n";
    for(i=0;i<=10;i++){
                       cout<< num[i];
    }
    cout<< "toca cualquier tecla para salir";                   
    cin>>salir;
    return 0;
}
