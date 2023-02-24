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
#define PRINTFD(x) printf("Valeur de " #x "= %d\n", x)
#define PRINTF(x,d) printf("Valeur de " #x "= %" #d "\n", x)


#define FLOAT_CHOICE 0
#define DOUBLE_CHOICE 1
#define LONG_DOUBLE_CHOICE 2

// HERE choose betwen FLOAT_CHOICE, DOUBLE_CHOICE, LONG_DOUBLE_CHOICE
#define MY_FLOAT_CHOICE FLOAT_CHOICE


#if MY_FLOAT_CHOICE==FLOAT_CHOICE

#define FLOAT float
#define FABS fabsf

#elif MYFLOAT==double

#define FLOAT double
#define FABS fabs
#define PRINT_DIRECTIVE f

#elif MYFLOAT==long double

#define FLOAT long double
#define FABS fabslf


// else let FABS undefined

#endif

#define IFABS(a) a=FABS(a);
#define PRINT_FLOAT(x) PRINTF(x,f)

#define SUM0(n,array) sum(n,array,0)
#define SUMV(n,array,v) sum(n,array,v)

#define PLAY(n) play ## n()
#define PLAY1 PLAY(1);
#define PLAY2 PLAY1 PLAY(2);
#define PLAY3 PLAY2 PLAY(3);

double sum(int count, double *array, double accu) {
    for (size_t i=0; i<count; ++i) {
        accu += array[i];
    }
    return accu;
}

#define VERSION 15
#if VERSION > 10

double sum2(int count, double *array, double accu) {

#else

double sum2(int count, double *array) {
    double accu = 0.0;

#endif

    for (size_t i=0; i<count; ++i) {
        accu += array[i];
    }
    return accu;
}

void play1() {
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
}

void play2() {
    FLOAT f = -3.14;
    IFABS(f)
    PRINT_FLOAT(f);
    f = FABS(-f);
    PRINT_FLOAT(f);
}

void play3(){
    double tab[] = {1.0, 2.0, 3.0, 4.0};
    double s = SUM0(4, tab);
    printf("1st sum: %f\n", s);
    s = SUMV(4, tab, s);
    printf("2nd sum: %f\n", s);
}

int main(){
        PLAY3
}