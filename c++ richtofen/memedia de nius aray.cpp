#include<iostream>
/*Este programa se llama lista array mayor menor*/
using namespace std;
int main(){
    float num[10];
    int i;
    int suma=0;//inicializar a 0 la vaiable acumuladora 
    int media;
    char salir;
    float n_numeros;
    float mayor,menor;//
    cout<< " cuantos mememeros quieres introducir ";
    cin>>n_numeros;
    for (i=0;i<n_numeros;i++){
        cout<<" dime un mememero ";
        cin>> num[i];
        
    }
    //ahora voy a enseñar mis mememeros
            cout<<" lista de los mememeros:\n " ;
            for(i=0;i<=10;i++){
                               cout<< num[i];
    }
    //ahora viene lo shido
    //voy comparando el mayor en cada numero
          mayor=num[0]; 
          for (i=0;i<n_numeros;i++){
              if (num[i]>mayor){
                  mayor=num[i];
              
              }
          }    
    cout<< "\n el mayor es:" << mayor;
    cout<< " toca cualquier niu para salir ";                   
    cin>>salir;
    return 0;
}








