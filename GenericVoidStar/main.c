#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    uint32_t nb;
    uint8_t color;
} DataType1;

typedef struct {
    uint8_t nb0;
    uint8_t nb1;
    uint8_t nb2;
    uint8_t nb3;
} DataType2;

/**
 * @brief 
 * 
 * @param data data to convert
 * @param count number of bytes to exchange
 */
void switchEndianness(void *data, size_t count) {
    unsigned char byte;
    unsigned char *bytes = (unsigned char *) data;
    for (size_t i=0; i < count/2; ++i) {
        byte = *(bytes + i); // bytes[i]);
        bytes[i] = bytes[count-i-1];
        bytes[count-i-1] = byte;
    }
}

int main() {
    DataType1 data1 = { 0xabcdef01, 0xff};
    DataType2 *p_data2 = (DataType2*) &data1;

    printf("Data origin: nb = (%u %x), color = %d \n", 
        data1.nb, data1.nb, data1.color);
    printf("Data as type2: %x %x %x %x\n", 
        p_data2->nb0,
        p_data2->nb1,
        p_data2->nb2,
        p_data2->nb3
    );
    p_data2->nb3 = 0x00;
    printf("Data origin (2): nb = (%u %x), color = %d \n", 
        data1.nb, data1.nb, data1.color);
    printf("Data as type2 (2): %x %x %x %x\n", 
              p_data2->nb0,
        p_data2->nb1,
        p_data2->nb2,
        p_data2->nb3
    );

    // WARNING: be sure to have a data1
    DataType1 * p_data1 = (DataType1 *) p_data2;
    printf("Data origin after double cast: nb = (%u %x), color = %d \n", 
        p_data1->nb, p_data1->nb, p_data1->color);

    switchEndianness(&data1, 4);
    printf("Data switch endianness (1): nb = (%u %x), color = %d \n", 
        p_data1->nb, p_data1->nb, p_data1->color);
    switchEndianness(&(data1.nb), 4);
    printf("Data switch endianness (1): nb = (%u %x), color = %d \n", 
        p_data1->nb, p_data1->nb, p_data1->color);
    return EXIT_SUCCESS;
}