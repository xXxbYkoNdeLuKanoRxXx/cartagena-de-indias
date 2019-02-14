#include<iostream>
using namespace std;

int main(){
    int num1;
    int respuesta;
    char salir;
    cout<< "diga buecencia un memero entre el uno y el 7 no vaya  ser turro y me ponga 7,00000000000001: ";
    cin>>num1;
    if (num1==1){
                cout<< "\n es lunes ";
    }
    if(num1==2){
               cout<< "\n martes ";
    }
    if(num1==3){
               cout<< "\n miercoles ";
    }
    if (num1==4){
                cout<<"\n jueves ";
    }
    if (num1==5){
                cout<<" \n víerne ";
    }
    if (num1==6){
                cout<<" \n sabao ";
    }
    if (num1==7) {
                cout<<" \n es dómíngo" ;
    }
    //cout<<semana( num1);
    //cout<< " introduzca cualquier año bisiesto para elecciones generales en benezuela2 ";
    cin>> salir;
    return 0;
}
