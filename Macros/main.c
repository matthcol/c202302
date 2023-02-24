#include <stdio.h>
#include <math.h>

#define DELTA_CAPACITY 10
#define HELLO "bonjour"

// #if OS==LINUX
#ifdef __linux__

#define INIT_CAPACITY 1000

#else

#define INIT_CAPACITY 100

#endif

#define INCR1(x) ++x;

#define FABS(a) a=fabs(a);

#define MYFLOAT float

#if MYFLOAT==float

#define MYFLOAT_SUFFIX f

#else

#define MYFLOAT_SUFFIX

#endif


// #define ABS(d) fabs ## MYFLOAT_SUFFIX ## (d)

#define PRINTFD(x) printf("Valeur de " #x "= %d\n", x)
#define PRINTF(x,d) printf("Valeur de " #x "= %" #d "\n", x)

int main(){
    char texte[] = "Les " "MACROS" " c'est bien";
    printf("%s\n", HELLO);
    printf("%s\n", texte);
    printf("Capacity init: %d\n", INIT_CAPACITY);
    printf("Capacity delta: %d\n", DELTA_CAPACITY);
    int x = INIT_CAPACITY;
    x += DELTA_CAPACITY;
    int y = x *2;

    PRINTFD(x);
    PRINTFD(y);

    INCR1(x)
    INCR1(y)

    PRINTF(x,d);
    PRINTF(y,d);

    double z = 3.14;
    PRINTF(z,f);
    PRINTF(z,.2f);


    MYFLOAT f = -3.14;
    FABS(f)
    printf("f = %f\n", f);
    // f = ABS(-f);
    printf("f = %f\n", f);


    return 0;
}