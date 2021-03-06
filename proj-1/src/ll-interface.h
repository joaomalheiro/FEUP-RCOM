#ifndef LL_INTERFACE_H___
#define LL_INTERFACE_H___

#include "strings.h"

#define LL_OK                  0x00
#define LL_NO_TIME_RETRIES     0x20
#define LL_NO_ANSWER_RETRIES   0x21

int llopen(int fd);

int llclose(int fd);

int llwrite(int fd, string message);

int llread(int fd, string* messagep);

#endif // LL_INTERFACE_H___
