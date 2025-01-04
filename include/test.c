#include<stdio.h>
#include "hbignum.h"
#include<stdbool.h>
#include<inttypes.h>

int main(){
    printf("Hello world\n");
    char buf[9000];
    size_t j = 0;

    uint32_t aa[4] = {1,0,0,0}, bb[4]={1,0,0,0};
    uint32_t* a = aa;
    uint32_t* b = bb;

    for(int i = 0; i< 100; i++){
        bigInt_add(a, b, a, 4);
        uint32_t* tmp = a;
        a=b;
        b=tmp;
        j += sprintf(buf+j, "%u %u %u %u\n", a[3], a[2], a[1], a[0]);
    }
    printf("%s", buf);
}
