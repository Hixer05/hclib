#include<stdio.h>
#include"../include/hstrlib.h"

int main(){
    printf("Hello world\n");
    char asdf[10] = "asdf";
    strcat(asdf, "adsf");
    printf("%s\n", asdf);
}
