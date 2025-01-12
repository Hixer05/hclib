#include "hstrlib.h"
#include<stdbool.h>


const size_t strlen(const char *const str){
    size_t i = 0;
    while(str[i]!='\0')
        i++;
    return i;
}

void strcat(char*const dest, const char*const src){
    const size_t len = strlen(dest);
    for(int i = 0; src[i]!='\0'; i++)
        dest[len+i] = src[i];
}

const bool strcmp(const char*const str1, const char*const str2){
    for(int i=0; str1[i]!='\0';i++)
        if(str1[i]!=str2[i])
           return false;

    return true;
}

void strcpy(char*const dest, const char*const src){
    int i = 0;
    do{
       dest[i] = src[i];
    }while(src[i]!='\0');
}


void reverse(char*const str){
    // (int) (2n+1)/2 == n
    const size_t len = strlen(str);
    for(int i = 0; i<len/2; i++){
        char tmp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = tmp;
    }
}
