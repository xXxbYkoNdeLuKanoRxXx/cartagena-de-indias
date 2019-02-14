#include<iostream>
int main(){
    int i;
    char salir;
    //este prograa cuenta hasta diez
    //i++ es lo ismo que i=i+1
    for(i=10;i>0;i--){
        std::cout<<i; 
        std::cout<<" ";                     
                               
    }   
    std::cout<<"toca cualquie tecla: ";
    std::cin>>salir;
    return 0;
}    
