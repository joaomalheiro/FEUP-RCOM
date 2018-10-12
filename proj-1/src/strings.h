#ifndef STRINGS_H___
#define STRINGS_H___

#include <stddef.h>

typedef struct {
    char* s;
    size_t len;
} string;

void free_string(string str);

string string_from(char* str);

#endif // STRINGS_H___
