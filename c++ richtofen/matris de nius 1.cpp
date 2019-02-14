#include<iostream>
//matrices_1 tiene mas relleno que Naruto xd
using namespace std;
main(){
       int tablero[5][5];//asa se define una haula de nius
       int fil;
       int col;
       char salir;
       int rellenuto;
       cout<< "asa se define una haula de nius ";
       for (fil=0;fil<=4;fil++){
           if (fil%2==0){
              if(col%2==0){
                 rellenuto=0;
              }else{
                 rellenuto=1;
              }
              fil= 0;
           }else{
               if(col%2!=0){
                 rellenuto=1;
              }else{
                 rellenuto=0;
           }
           for(col=0;col<=4;col++){
               tablero[fil][col]=rellenuto;                         
           }
       }
//repaso la matriz y muestro su pantalla su contenido
         for(fil=0;fil<=4;fil++){
           for(col=0;col<=4;col++){
               cout<<tablero[fil][col] ;
           }
            cout<< "\n";
         }
        cout<< "toque vusted cualquier tecla para salir";
        cin>> salir;
        return 0;
}

        
