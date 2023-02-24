#include "unions.h"
#include <stdio.h>

void displayMachine(machine_t machine,uint8_t choice){
    switch (choice)
    {
    case M_IPV4:
        for (size_t i=0; i<4; ++i) printf("%d.", machine.ipv4[i]);
        break;
    case M_IPV6:
        for (size_t i=0; i<8; ++i) printf("%x.", machine.ipv6[i]);
        break;
    case M_NAME:
        printf("%s", machine.name);
        break;
    default: // WRONG USAGE
        break;
    }
    printf("\n");
}