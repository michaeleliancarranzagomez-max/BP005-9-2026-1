#include <iostream>
int main(){
    int m[5]={1,2,3,4,5};
    int *p = m;
    int i;
    for(i = 0; i<5;i++){
        std::cout<<"Elemento "<< i << "=" << *(p +i) << std::endl;
    }
    return 0;
}
