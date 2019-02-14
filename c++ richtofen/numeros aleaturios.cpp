#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
/*este programa genera 5 numeros al azar*/
int main(){
    float lista[5];
    int i;
    char salir;
    double semillita;
    srand(semillita);
    semillita=time(0);
    for(i=0;i<5;i++){
        lista[i]=rand()%6+1;
        cout<< lista[i]<<"\n";
    }
    cout<<" toca cualquier niu para salir";
    cin>>salir;
    return 0;
}
