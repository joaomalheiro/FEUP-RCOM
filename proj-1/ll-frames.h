#ifndef LL_INTERFACE_H___
#define LL_INTERFACE_H___

#include "ll-core.h"

#include <stddef.h>
#include <stdbool.h>

bool isIframe(frame f);

bool isSETframe(frame f);

bool isDISCframe(frame f);

bool isUAframe(frame f);

bool isRRframe(frame f, int parity);

bool isREJframe(frame f, int parity);


int writeIframe(int fd, char* message, int index);

int writeSETframe(int fd);

int writeDISCframe(int fd);

int writeUAframe(int fd);

int writeRRframe(int fd, int parity);

int writeREJframe(int fd, int parity);

#endif // LL_INTERFACE_H___
