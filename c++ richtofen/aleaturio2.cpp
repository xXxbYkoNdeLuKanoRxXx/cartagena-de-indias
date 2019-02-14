#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
/*este programa genera 5 numeros al azar*/
int main(){
    float matriz[3][3];
    int fil,col;
    int i;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(fil=0;fil<3;fil++){
        for(col=0;col<3;col++){
           matriz[fil][col]=rand()%10;
           cout<<matriz[fil][col];
        }
       cout<< "toque cualquier niu para salir";
       cin>> salir;
       return 0;
}
