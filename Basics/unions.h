#ifndef _UNIONS
#define _UNIONS

#include <stdint.h>

#define M_IPV4 0
#define M_IPV6 1
#define M_NAME 2

typedef union {
     uint8_t ipv4[4];
     uint16_t ipv6[8];
     char name[30];
} machine_t;


void displayMachine(machine_t machine,uint8_t choice);

#endif // !_UNIONS
