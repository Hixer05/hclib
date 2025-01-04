#ifndef HSTRLIB_H_
#define HSTRLIB_H_
#include<stddef.h>
#include<stdbool.h>

extern const size_t strlen(const char*const str);
extern void strcat(char*const dest, const char*const src);
extern const bool strcmp(const char*const str1, const char*const str2);
#endif // HSTRLIB_H_
