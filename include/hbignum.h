#ifndef HBIGNUM_H_
#define HBIGNUM_H_
#include<stddef.h>
#include<inttypes.h>

void bigInt_shiftr(uint32_t* num, size_t n);
void bigInt_add(uint32_t *a, uint32_t *b, uint32_t *dest, size_t n) ;
const bool bigInt_eq(uint32_t *a, uint32_t *b, size_t n) ;

#endif // HBIGNUM_H_
