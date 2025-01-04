#ifndef HSTRLIB_H_
#define HSTRLIB_H_
#include<stddef.h>
#include<stdbool.h>

const size_t strlen(const char*const str);
void strcat(char*const dest, const char*const src);
const bool strcmp(const char*const str1, const char*const str2);
void strcpy(char*const dest, const char*const src);
#endif // HSTRLIB_H_
