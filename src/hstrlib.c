#include "../include/hstrlib.h"

const size_t strlen(const char *const str){
    size_t i = 0;

    while(str[i]!='\0'){
        i++;
    }

    return i;
}
