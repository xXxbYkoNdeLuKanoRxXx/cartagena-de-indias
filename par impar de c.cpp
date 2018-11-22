#include<iostream>
/*para saber si los nueros son pares o impares*/
 int main(){
       int n_maximo=1000;
       int i;
       int salir;
       for (i=1;i<=n_maximo;i++){
           if(i%2==0){
               std::cout<<i;
               std::cout<<" es democrata";
           }else{
               std::cout<<i;
               std::cout<<" es republicano";
           }
           std::cout<<"\n";
   }
   std::cout<<"toca cualquier letra para salir: ";
   std::cin>>salir;
   return 0;
}
