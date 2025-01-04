#include "../include/hstrlib.h"
#include<stdbool.h>


extern const size_t strlen(const char *const str){
    size_t i = 0;
    while(str[i]!='\0')
        i++;
    return i;
}

extern void strcat(char*const dest, const char*const src){
    const size_t len = strlen(dest);
    for(int i = 0; src[i]!='\0'; i++)
        dest[len+i] = src[i];
}

extern const bool strcmp(const char*const str1, const char*const str2){
    for(int i=0; str1[i]!='\0';i++)
        if(str1[i]!=str2[i])
           return false;

    return true;
}

extern void strcpy(char*const dest, const char*const src){
    int i = 0;
    do{
       dest[i] = src[i];
    }while(src[i]!='\0');
}
