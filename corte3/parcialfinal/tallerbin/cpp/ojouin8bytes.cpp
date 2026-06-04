#include <iostream>
#include <limits>
#include <cstdint>
using namespace std;

int main(){
    cout<<"int min: "<<numeric_limits<int>::min()<<endl;
    cout<<"int max: "<<numeric_limits<int>::max()<<endl;
    cout<<"uint8_t min: "<<static_cast<int>(numeric_limits<uint8_t>::min())<<endl;
    cout<<"uint8_t max: "<<static_cast<int>(numeric_limits<uint8_t>::max())<<endl;
    cout<<"uint16_t min: "<<numeric_limits<uint16_t>::min()<<endl;
    cout<<"uint16_t max: "<<numeric_limits<uint16_t>::max()<<endl;

    return 0;
}
