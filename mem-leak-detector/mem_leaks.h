#ifndef __MEM_LEAKS_H
#define __MEM_LEAKS_H
#include <stddef.h>
#include <stdint.h> 
void *_malloc(size_t size, uint32_t line,const char* func);
void _free(void *ptr, uint32_t line);

#undef malloc
#undef free
#define malloc(size) _malloc(size, __LINE__,__func__)
#define free(ptr) _free(ptr, __LINE__)

void print_report();

#endif