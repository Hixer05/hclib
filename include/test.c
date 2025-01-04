#include<stdio.h>
#include"../include/hstrlib.h"
#include<stdbool.h>

int main(){
    printf("Hello world\n");
    char asdf[10] = "asdf";
    strcat(asdf, "adsf");
    const bool eq = strcmp(asdf, "aasdfadsf");
    printf("%b\n", eq);
}
