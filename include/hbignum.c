#include "hbignum.h"
#include <stddef.h>
#include<inttypes.h>

const bool bigInt_eq(uint32_t *a, uint32_t *b, size_t n) {
  for (uint32_t i = 0; i < n; i++)
    if (a[i] != b[i])
      return false;
  return true;
}

#define bitsize(type) (sizeof(type)*8)

void bigInt_add(uint32_t *a, uint32_t *b, uint32_t *dest, size_t n) {
  uint32_t zero[n];
  uint32_t carry[n];
  uint32_t mask[n];
  for (uint32_t i = 0; i < n; i++) {
    dest[i] = a[i];
    carry[i] = b[i];
    zero[i] = 0;
  }
  while (!bigInt_eq(carry, zero, n)){
    for (uint32_t i = 0; i < n; i++) {
      mask[i] = dest[i] & carry[i]; // use mask as tmp_carry
      dest[i] = dest[i] ^ carry[i];
      carry[i] = mask[i] << 1;
      mask[i] = mask[i] >> (bitsize(uint32_t)-1);//REVIEW: what?
      if (i != 0)
        carry[i] |= mask[i - 1];
    }
  }
}

void bigInt_shiftr(uint32_t* num, size_t n){
   for(uint32_t i = 0; i<n; i++)
   {
       num[i] = num[i] >> 1;
       if(i<n-1)
           num[i] |= num[i+1] << (bitsize(uint32_t)-1);
   }
}
