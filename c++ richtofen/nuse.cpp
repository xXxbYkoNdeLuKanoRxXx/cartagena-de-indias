#include<iostream>
#include<cstdlib>
#include<ctime>
//matrices_1 tiene mas relleno que Naruto xd
using namespace std;
main(){
       int tablero[5][5];//asa se define una haula   de nius
       int fil;
       int col;
       int i;
       char salir;
       int lista[5];
       int rellenuto;
       for(i=0;i<5;i++){
            lista[i]=rand()%2;
            cout<<lista[i]<<"\n";
       }
       cout<< "toca cualquier niu para salir" ;
       cin>> salir;
       return 0;
}
