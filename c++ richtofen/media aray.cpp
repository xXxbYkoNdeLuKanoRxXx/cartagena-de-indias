#include<iostream>
/*Este programa sirve para saber leer  hasta diez mememeros*/
using namespace std;
int main(){
    int num[10];
    int i;
    int suma=0;//inicializar a 0 la vaiable acumuladora 
    int media;
    int n_numeros;
    cout<< "cuantos mememeros quieres introducir";
    cin>>n_numeros;
    for (i=0;i<=10;i++){
        cout<<"dime un mememero";
        cin>> num[i];
        
    }
    int salir;
    //ahora voy a enseñar mis mememeros
    cout<<"lista de los mememeros:\n";
    for(i=0;i<=10;i++){
                       cout<< num[i];
    }
    //ahora viene lo shido
    //calcula la edia de los numeros ARRAY
    for (i=0;i<=10;i++){
        //sume vusted los nius co xd
        suma= suma+num[i];
    }
        cout<< "mememedia es:\n" << suma;
    
    
    cout<< "toca cualquier niu para salir";                   
    cin>>salir;
    return 0;
}
