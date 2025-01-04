#include "../include/hmath.h"

const int ipow(const int a, const unsigned int e){
    int output = a;
    for(unsigned int i = e-1; i>0; i--)
        output*=a;
    return output;
}
