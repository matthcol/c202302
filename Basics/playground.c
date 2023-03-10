
#include "playground.h"

#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#include "utils.h"
#include "arrays.h"
#include "unions.h"


void playWithInts() {
    printf("It's monday !\n");
    char x8 = 127;
    unsigned char ux8 = 255;
    short x16 = 32767;
    unsigned short ux16 = 65535;
    int x32 = 2147483647;
    unsigned int ux32 = 4294967295;
    long long x64;
    unsigned long long ux64 = 18446744073709551615LLU; 
    uint64_t ux64_bis = 18446744073709551615LLU; 
    printf("char x=%d ; size=%d byte(s)\n", x8, sizeof(x8));
    printf("int ; size=%d byte(s)\n", sizeof(int));
    printf("long ; size=%d byte(s)\n", sizeof(long));
    printf("long long x=%llu; size=%d byte(s)\n", ux64, sizeof(long long));
    ux64 = 0xffffffffffffffff;
    x64 = 0xffffffffffffffff;
    printf("long long x=%lld; size=%d byte(s)\n", x64, sizeof(long long));
    printf("u long long x=%llu; size=%d byte(s)\n", ux64, sizeof(long long));
    printf("uint64_t x=%llu; size=%d byte(s)\n", ux64, sizeof(uint64_t));
    printf("Limits long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Limits u long long: %llu to %llu\n",0, ULLONG_MAX);
    // perhaps wrong assignment
    ux32 = ux64;
    x32 = ux32;
}

void playWithDoubles(){
    float price = 0.1f;
    printf("Prices (1,2,3): %0.8f, %0.8f, %0.8f\n", price, 2*price, 3*price);
    printf("Divide by 0: %f\n", 1.0 / 0.0);
    printf("1E308 * 2: %e -> %f\n", 1E308, 1E308 * 2);
}

bool isWeatherOk() {
    // return TRUE;
    return 3 < 5;
}

_Bool isWeatherOkRealBool() {
    return 3 < 5;
}

void playWithStrings(){
    char day1[] = "Monday";
    char day2[] = "Tuesday";
    // char buffer[10485760];  // to big for the stack
    char buffer[256];
    char *day = day1;
    char *newday; 

    printf("Days: %s, %s\n", day1, day2);
    // day1 = day2
    strcpy(buffer, day1);
    printf("Copy day: %s\n", buffer);
    printf("Day variable (init): %s\n", day);
    day = day2;
    printf("Day variable (2): %s\n", day);
    // strcpy(newday, day1);  // seg fault
    newday = strdup(day1); // copy with allocation
    printf("Copy day (alloc): %s\n", newday); 

    // debordement (avec ou sans seg fault)
    // printf("Hors array: #%s#\n", day1+10000);

    free(newday);
    newday = malloc(10485760);
    strcpy(newday, day1);
    free(newday);
}

void playWithSwap() {
    double a = 3.14;
    double b = 365.25;
    printf("Before swap: %f, %f\n", a, b);
    swap(&a,&b);
    printf("Before swap: %f, %f\n", a, b);
}

void playWithFind() {
    double values[]= {12.0, 3.14, 34.2, 87.4, 3.1401, 13.3, 3.1399999};
    size_t size = 7;
    double epsilon = 1E-4;
    double *p_found = values;
    double *end = values + size;

    do {
        p_found = find(p_found, end, 3.14, epsilon);
        if (p_found != NULL) {
            printf("Found: %f\n", *p_found);
            p_found += 1;
        }
    } while (p_found != NULL);
}


void playWithMachines() {
    uint8_t ipv4a[] = {192,168,56,101};
    uint16_t ipv6b[] = {0xfe80,0x0,0x0,0x0,0x237b,0x430e, 0xdc05, 0xdc05};
    char name[] = "myserver.myfarm.org";

    machine_t m1;
    memcpy(m1.ipv4, ipv4a, 4); 

    machine_t m2;
    memcpy(m2.ipv6, ipv6b, 16);

    machine_t m3;
    strcpy(m3.name, name); 

    displayMachine(m1, M_IPV4);
    displayMachine(m2, M_IPV6);
    displayMachine(m3, M_NAME);

    printf("\n");
    // wrong usage
    displayMachine(m1, M_IPV4);
    displayMachine(m2, M_IPV6);
    displayMachine(m1, M_NAME);

    printf("\nSize type machine_t: %d\n", sizeof(machine_t));
}