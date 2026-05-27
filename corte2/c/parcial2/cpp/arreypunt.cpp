#include <iostream>
int main(){
    int datos[5]={8, 3, 15, 6, 10};
    int i;
    for(i=0; i<5;i++){
        std::cout<< "datos["<< i <<"] = " <<datos[i]<<
        "; direccion = "<<static_cast < const void *>(&datos[i])<<std::endl;
      //final es para decir que es un puntero y que no importa el tipo pero que lo necesita
      //el &datos es para decir que es la direccion i
      //enci todo eso para decir la direccion
    }
return 0;
}
